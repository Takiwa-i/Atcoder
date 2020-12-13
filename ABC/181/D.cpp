#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

bool solve(std::string &s)
{
	if (s.size() <= 3)
	{
		std::sort(s.begin(), s.end());
		do
		{
			int ans = 0;
			for (int i = 0; i < s.size(); i++)
				ans = ans * 10 + s[i] - '0';
			if (ans % 8 == 0)
				return (true);
		} while (std::next_permutation(s.begin(), s.end()));
		return (false);
	}
	std::vector<int> count(10, 0);
	for (int i = 0; i < s.size(); i++)
		count[s[i] - '0']++;
	for (int i = 0; i < 1000; i += 8)
	{
		std::vector<int> numb(10, 0);
		int j = i;
		for (int k = 0; k < 3; k++)
		{
			numb[j % 10]++;
			j /= 10;
		}
		bool flag = true;
		for (int x = 0; x < 10; x++)
		{
			if (numb[x] > count[x])
				flag = false;
		}
		if (flag)
			return (true);
	}
	return (false);
}

int main(void)
{
	std::string s;

	std::cin >> s;
	if (solve(s))
		std::cout << "Yes" << std::endl;
	else
		std::cout << "No" << std::endl;
	return (0);
}
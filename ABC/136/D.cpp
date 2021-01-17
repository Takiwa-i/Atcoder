#include <iostream>
#include <string>
#include <vector>
#include <deque>
#include <algorithm>

int main(void)
{
	std::string s;
	std::cin >> s;
	std::vector<int> A(s.size(), 0);
	std::deque<int> R;
	for (int i = 0; i < s.size();)
	{
		int count = 0;
		while (s[i + count] == s[i])
			++count;
		R.push_back(count);
		if (s[i] == 'L')
		{
			int l = R.back();
			R.pop_back();
			int r = R.back();
			R.pop_back();
			A[i - 1] = (r + 1) / 2 + l / 2;
			A[i] = r / 2 + (l + 1) / 2;
		}
		i += count;
	}
	for (int i = 0; i < A.size(); i++)
		std::cout << A[i] << " ";
	std::cout << std::endl;
	return (0);
}
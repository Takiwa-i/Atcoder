#include <iostream>
#include <string>

#define ull unsigned long long

bool check(std::string &s, int k)
{
	int re = 0;	
	
	for (int i = 0; i <= s.size() - k; i++)
	{
		std::string p = s;
		re = 0;
		for (int j = 0; j < k; j++)
			p[i + j] = '0';
		for (std::string::iterator itr = p.begin(); itr != p.end(); itr++)
			re += *itr - '0';
		if (re % 3 == 0)
			return (true);
	}
	return (false);
}

int main(void)
{
	std::string s;

	std::cin >> s;
	for (int k = 0; k <= s.size() - 1; k++)
	{
		if (check(s, k))
		{
			std::cout << k << std::endl;
			return (0);
		}
	}
	std::cout << -1 << std::endl;
	return (0);
}
#include <iostream>
#include <string>

int main(void)
{
	long long n;
	long long r, g, b, ans, non;
	r = 0;
	g = 0;
	b = 0;
	non = 0;
	ans = 0;
	std::string s;
	std::cin >> n >> s;
	for (int i = 0; i < n; i++)
	{
		if (s[i] == 'R')
			++r;
		else if (s[i] == 'G')
			++g;
		else
			++b;
	}
	ans = r * g * b;
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (s[i] == s[j])
				continue ;
			int k = 2 * j - i;
			if (k >= n || s[i] == s[k]|| s[j] == s[k])
				continue;
			++non;
		}
	}
	std::cout << ans - non << std::endl;
	return (0);
}
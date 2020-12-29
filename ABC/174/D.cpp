#include <iostream>
#include <string>
#include <algorithm>

int main(void)
{
	int n;
	int ans = 200000;
	std::string s;
	int r = 0;
	int b = 0;
	std::cin >> n;
	std::cin >> s;
	for (int i = 0; i < n; i++)
	{
		if (s[i] == 'R')
			++r;
	}
	if (r == 0)
	{
		std::cout << 0 << std::endl;
		return (0);
	}
	for (int i = 0; i < n; i++)
	{
		int p;
		if (s[i] == 'R')
			--r;
		else
			++b;
		p = std::max(b, r);
		ans = std::min(ans, p);
	}
	std::cout << ans << std::endl;
	return (0);
}
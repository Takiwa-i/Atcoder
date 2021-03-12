#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

int main(void)
{
	std::string s;
	std::cin >> s;
	int place = s.size() - 1;
	long long ans = 0;
	for (int bit = 0; bit < (1 << place); bit++)
	{
		long long p = 0;
		for (int i = 0; i < place; i++)
		{
			p *= 10;
			p += s[i] - '0';
			if (bit & (1 << i))
			{
				ans += p;
				p = 0;	
			}
		}
		p *= 10;
		p += s.back() - '0';
		ans += p;
	}
	std::cout << ans << std::endl;
	return (0);

}
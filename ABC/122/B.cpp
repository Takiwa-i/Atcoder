#include <iostream>
#include <string>
#include <algorithm>

int main(void)
{
	std::string s;

	std::cin >> s;
	int ans = 0;
	for (int i = 0; i < s.size(); i++)
	{
		int count = 0;
		while (s[i] == 'A' || s[i] == 'T' || s[i] == 'G' || s[i] == 'C')
		{
			++count;
			++i;
		}
		ans = std::max(ans, count);
	}
	std::cout << ans << std::endl;
	return (0);
}
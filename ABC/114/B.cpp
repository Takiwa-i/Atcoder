#include <iostream>
#include <string>
#include <algorithm>

int main(void)
{
	std::string s;
	int ans = 800;

	std::cin >> s;
	for (int i = 0; i + 2 < s.size(); i++)
	{
		int num;
		num = 100 * (s[i] - '0') + 10 * (s[i + 1] - '0') + (s[i + 2] - '0');
		ans = std::min(ans, abs(753 - num));
	}
	std::cout << ans << std::endl;
	return (0);
}
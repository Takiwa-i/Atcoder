#include <iostream>
#include <string>

int main(void)
{
	std::string s;
	int ans = 700;
	std::cin >> s;
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == 'o')
			ans += 100;
	}
	std::cout << ans << std::endl;
	return (0);
}
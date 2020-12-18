#include <iostream>
#include <string>

int main(void)
{
	std::string s, t;
	int ans = 0;

	std::cin >> s >> t;
	for (int i = 0; i < 3; i++)
	{
		if (s[i] == t[i])
			++ans;
	}
	std::cout << ans << std::endl;
	return (0);
}
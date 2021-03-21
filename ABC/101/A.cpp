#include <iostream>
#include <string>

int main(void)
{
	std::string s;
	std::cin >> s;
	int ans = 0;
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == '+')
			++ans;
		else
			--ans;
	}
	std::cout << ans << std::endl;
	return (0);
}
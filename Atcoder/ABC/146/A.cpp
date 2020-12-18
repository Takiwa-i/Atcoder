#include <iostream>
#include <string>

int main(void)
{
	std::string s;
	int			ans;

	std::cin >> s;
	if (s == "SUN")
		ans = 0;
	else if (s == "MON")
		ans = 1;
	else if (s == "TUE")
		ans = 2;
	else if (s == "WED")
		ans = 3;
	else if (s == "THU")
		ans = 4;
	else if (s == "FRI")
		ans = 5;
	else if (s == "SAT")
		ans = 6;
	std::cout << 7 - ans << std::endl;
	return (0);
}
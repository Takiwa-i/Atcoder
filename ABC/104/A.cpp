#include <iostream>
#include <string>

int main(void)
{
	int r;
	std::string ans;
	std::cin >> r;
	if (r < 1200)
		ans = "ABC";
	else if (r < 2800)
		ans = "ARC";
	else
		ans = "AGC";
	std::cout << ans << std::endl;
	return (0);

}
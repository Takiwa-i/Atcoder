#include <iostream>
#include <vector>
#include <algorithm>

int main(void)
{
	int a, b, c, d;
	std::cin >> a >> b >> c >> d;
	if (abs(a - c) <= d)
		std::cout << "Yes" << std::endl;
	else if (abs(a - b) <= d && abs(b - c) <= d)
		std::cout << "Yes" << std::endl;
	else
		std::cout << "No" << std::endl;
	return (0);
}
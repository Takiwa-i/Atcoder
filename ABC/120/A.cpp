#include <iostream>
#include <algorithm>

int main(void)
{
	int a, b, c;

	std::cin >> a >> b >> c;
	std::cout << std::min(c, b / a) << std::endl;
	return (0);
}
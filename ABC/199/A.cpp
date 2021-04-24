#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

int main(void)
{
	long long a, b, c;

	std::cin >> a >> b >> c;
	if (a * a < c * c - b * b)
		std::cout << "Yes" << std::endl;
	else
		std::cout << "No" << std::endl;
	return (0);
}
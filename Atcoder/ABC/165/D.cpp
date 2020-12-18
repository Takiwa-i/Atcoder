#include <iostream>
#include <algorithm>
#include <cmath>

#define ull unsigned long long

int main(void)
{
	ull a, b, n;
	std::cin >> a >> b >> n;
	if (n < b)
		std::cout << (a * n) / b << std::endl;
	else
		std::cout << (a * (b - 1)) / b << std::endl;
	return (0);
}
#include <iostream>
#include <iomanip>
#include <algorithm>

#define ld long double

int main(void)
{
	ld l;
	std::cin >> l;
	std::cout << std::fixed << std::setprecision(15) << (l / 3.0) * (l / 3.0) * (l / 3.0) << std::endl;
}
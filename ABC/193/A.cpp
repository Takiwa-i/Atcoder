#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>


int main(void)
{
	double a, b;

	std::cin >> a >> b;
	std::cout <<std::fixed << std::setprecision(20) << (a - b) / a * 100 << std::endl;
	return (0);
}
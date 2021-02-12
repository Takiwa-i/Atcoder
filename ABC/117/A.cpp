#include <iostream>
#include <iomanip>

int main(void)
{
	double t, x;
	std::cin >> t >> x;
	std::cout << std::fixed << std::setprecision(10) << t / x << std::endl;
	return (0);
}
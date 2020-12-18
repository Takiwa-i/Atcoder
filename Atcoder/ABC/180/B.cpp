#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <iomanip>

int main(void)
{
	int n;
	unsigned long man = 0;
	long double eu = 0.0;
	unsigned long che = 0;
	std::cin >> n;
	for (int i = 0; i < n; i++)
	{
		unsigned long x;
		std::cin >> x;
		x = abs(x);
		man += x;
		che = std::max(che, x);
		eu += x * x;
	};
	std::cout << man << std::endl;
	std::cout << std::fixed << std::setprecision(15) << sqrt(eu) << std::endl;
	std::cout << che << std::endl;
	return (0);
}
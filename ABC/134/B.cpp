#include <iostream>
#include <cmath>

int main(void)
{
	int n, d;
	int ans;

	std::cin >> n >> d;
	if (n % (2 * d + 1) != 0)
		std::cout << n / (2 * d + 1) + 1 << std::endl;
	else
		std::cout << n / (2 * d + 1) << std::endl;
	return (0);
}
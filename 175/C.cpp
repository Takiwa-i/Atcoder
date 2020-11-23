#include <iostream>
#include <cmath>

int main(void)
{
	long long x, k, d;

	std::cin >> x >> k >> d;
	x = std::abs(x);
	long long r = x % d;
	if (x / d >= k)
		std::cout << x - k * d << std::endl;
	else
	{
		if ((k - x / d) % 2 == 0)
			std::cout << r << std::endl;
		else
			std::cout << d - r << std::endl;
	}
	return (0);
}
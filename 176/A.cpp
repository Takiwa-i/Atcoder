#include <iostream>

int main(void)
{
	int n, x, t;
	int count;

	std::cin >> n >> x >> t;
	if (n % x == 0)
		count = n / x;
	else
		count = n / x + 1;
	std::cout <<  count * t << std::endl;
	return (0);
}
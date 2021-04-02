#include <iostream>
#include <vector>

int main(void)
{
	int d, n;
	std::cin >> d >> n;
	if (n == 100)
		n++;
	if (d == 0)
		std::cout << n << std::endl;
	else if (d == 1)
		std::cout << 100 * n << std::endl;
	else
		std::cout << 10000 * n << std::endl;
	return (0);
}
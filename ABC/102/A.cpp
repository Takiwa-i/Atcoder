#include <iostream>

int main(void)
{
	int n;

	std::cin >> n;
	if (n % 2 == 0)
		std::cout << n << std::endl;
	else
		std::cout << n * 2 << std::endl;
	return (0);
}
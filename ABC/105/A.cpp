#include <iostream>

int main(void)
{
	int n, k;

	std::cin >> n >> k;
	if (n % k == 0)
		std::cout << 0 << std::endl;
	else
		std::cout << (n / k + 1) - n / k << std::endl;
	return (0);
}

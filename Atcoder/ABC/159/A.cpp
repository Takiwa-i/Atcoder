#include <iostream>

int main(void)
{
	int n, m;
	std::cin >> n >> m;
	std::cout << n * (n - 1) / 2 + m * (m - 1) / 2 <<std::endl;

	return (0);
}
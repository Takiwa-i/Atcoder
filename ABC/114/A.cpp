#include <iostream>

int main(void)
{
	int x;

	std::cin >> x;
	if (x == 7 || x == 5 || x == 3)
		std::cout << "YES" << std::endl;
	else
		std::cout << "NO" << std::endl;
	return (0);
}
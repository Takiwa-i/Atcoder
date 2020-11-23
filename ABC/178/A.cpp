#include <iostream>

int main(void)
{
	int x;

	std::cin >> x;
	if (x == 0)
		std::cout << 1 << '\n';
	else
		std::cout << 0 << '\n';
	return (0);
}
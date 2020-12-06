#include <iostream>

int main(void)
{
	int a, b;

	std::cin >> a >> b;
	if (a >= 1 && a <= 9 && b >= 1 && b <= 9)
		std::cout << a * b << std::endl;
	else
		std::cout << -1 << std::endl;
	return (0);
}

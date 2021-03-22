#include <iostream>

int main(void)
{
	int a, b;

	std::cin >> a >> b;
	if (a > 8 || b > 8)
		std::cout << ":(\n";
	else
		std::cout << "Yay!\n";
	return (0);
}
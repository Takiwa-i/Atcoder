#include <iostream>

int main(void)
{
	int n;

	std::cin >> n;
	if (n >= 1000)
		std::cout << "ABD" << std::endl;
	else
		std::cout << "ABC" << std::endl;
	return (0);
}
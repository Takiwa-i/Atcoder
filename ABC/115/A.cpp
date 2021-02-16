#include <iostream>

int main(void)
{
	int d;

	std::cin >> d;
	if (d == 25)
		std::cout << "Christmas" << std::endl;
	else if (d == 24)
		std::cout << "Christmas Eve" << std::endl;
	else if (d == 23)
		std::cout << "Christmas Eve Eve" << std::endl;
	else
		std::cout << "Christmas Eve Eve Eve" << std::endl;
	return (0);
}
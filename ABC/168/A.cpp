#include <iostream>

int main(void)
{
	int n; 
	int p;

	std::cin >> n;
	p = n % 10;
	if (p == 2 || p == 4 || p == 5 || p == 7 || p == 9)
		std::cout << "hon\n";
	else if (p == 0 || p == 1 || p == 6 || p == 8)
		std::cout << "pon\n";
	else if (p == 3)
		std::cout << "bon\n";
	return (0);
}
#include <iostream>

int main(void)
{
	unsigned long long x, p;
	int year = 0;
	p = 100;
	std::cin >> x;
	while (1)
	{
		if (p >= x)
			break ;
		p = p + p / 100;
		++year;
	}
	std::cout << year << std::endl;
	return (0);
}
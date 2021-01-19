#include <iostream>

int main(void)
{
	int r, d, x;

	std::cin >> r >> d >> x;
	for (int i = 1; i <= 10; i++)
	{
		std::cout << r * x - d << std::endl;
		x = r * x - d;
	}
	return (0);
}
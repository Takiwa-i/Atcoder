#include <iostream>
#include <algorithm>

int main(void)
{
	int a = 101;
	int p;

	for (int i = 0; i < 4; i++)
	{
		std::cin >> p;
		a = std::min(a, p);
	}
	std::cout << a << std::endl;
	return (0);
}
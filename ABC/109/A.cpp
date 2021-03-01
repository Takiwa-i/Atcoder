#include <iostream>

int main(void)
{
	int a, b;
	std::cin >> a >> b;
	for (int c = 1; c <= 3; c++)
	{
		if ((a * b * c) % 2 == 1)
		{
			std::cout << "Yes\n";
			return (0);
		}
	}
	std::cout << "No\n";
	return (0);
}
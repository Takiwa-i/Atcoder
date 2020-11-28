#include <iostream>

int main(void)
{
	int a, b;
	
	std::cin >> a >> b;
	if (a < b)
	{
		for (int i = 0; i < b; i++)
			std::cout << a;
	}
	else
	{
		for (int i = 0; i < a; i++)
			std::cout << b;
	}
	std::cout << std::endl;
	return (0);
}
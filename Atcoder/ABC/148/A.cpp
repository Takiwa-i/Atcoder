#include <iostream>

int main(void)
{
	int a, b;
	
	std::cin >> a >> b;
	for (int i = 1; i < 4; i++)
	{
		if (i != a && i != b)
		{
			std::cout << i << std::endl;
			return (0);
		}
	}
	return (0);
}
#include <iostream>

int main(void)
{
	int x;
	
	for (int i = 0; i < 5; i++)
	{
		std::cin >> x;
		if (x == 0)
		{
			std::cout << i + 1 << std::endl;
			break ;
		}
	}
	return (0);
}

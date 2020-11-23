#include <iostream>


int main(void)
{
	int a, b, x;
	std::cin >> a >> b;
	for (int i = 10; i <= 1250; i++)
	{
		if ((int)(i * 0.08) == a && (int)(i * 0.1) == b)
		{
			std::cout << i << std::endl; 
			return (0);
		}
	}
	std::cout << -1 << std::endl;
	return (0);
}
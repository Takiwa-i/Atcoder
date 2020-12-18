#include <iostream>

int main(void)
{
	int n;
	int i;


	std::cin >> n;
	i = 1;
	while (1)
	{
		if (i * 1000 >= n)
			break;
		++i;
	}
	std::cout << i * 1000 - n << std::endl;
	return (0);
}
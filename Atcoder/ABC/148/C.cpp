#include <iostream>

int main(void)
{
	unsigned long long a, b;

	std::cin >> a >> b;	
	for (unsigned long long i = a; i <= a * b; i += a)
	{
		if (i % b == 0)
		{
			std::cout << i << std::endl;
			break ;
		} 
	}
	return (0);
}

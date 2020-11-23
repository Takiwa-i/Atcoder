#include <iostream>
#include <algorithm>

int main(void)
{
	long long x;
	
	std::cin >> x;
	for (long long a = - 200; a <= 200; a++)
	{
		for (long long b = -200; b <= 200; b++)
		{
			if (a * a * a * a * a - b * b * b * b * b == x)
			{
				std::cout << a << " " << b << std::endl;
				return (0);	
			}
		}
	}
	return (0);
}
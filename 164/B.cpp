#include <iostream>

int main(void)
{
	int a, b, c, d;
	std::cin >> a >> b >> c >> d;
	while(1)
	{
		if (c <= 0)
		{
			std::cout << "Yes\n";
			break ;
		}
		else if (a <= 0)
		{
			std::cout << "No\n";
			break ;
		}
		c -= b;
		a -= d;
	}
	return (0);
}
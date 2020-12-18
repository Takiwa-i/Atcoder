#include <iostream>

int main (void)
{
	int n;
	bool flag;

	flag = false;
	std::cin >> n;
	for (int i = 1; i < 10; i++)
	{
		for(int j = 1; j < 10; j++)
		{
			if (i * j == n)
			{	
				flag = true;
				break ;	
			}
		}
	}
	if (flag)
		std::cout << "Yes" << std::endl;
	else
		std::cout << "No" << std::endl;
	return (0);
}

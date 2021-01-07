#include <iostream>

int main(void)
{
	char prev;
	char now;
	bool flag = false;
	for (int i = 0; i < 4; i++)
	{
		if (i == 0)
			std::cin >> prev;
		else
		{
			std::cin >> now;
			if (now == prev)
				flag = true;
			prev = now;
		}
	}
	if (flag)
		std::cout << "Bad" << std::endl;
	else
		std::cout << "Good" << std::endl;
	return (0);
}
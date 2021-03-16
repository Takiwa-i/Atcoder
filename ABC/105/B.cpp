#include <iostream>

int main(void)
{
	int n;
	std::cin >> n;
	for (int i = 0; i * 4 <= n; i++)
	{
		for (int j = 0; j * 7 <= n; j++)
		{
			if (4 * i + 7 * j == n)
			{
				std::cout << "Yes\n";
				return (0);
			}
		}
	}
	std::cout << "No\n";
	return (0);
}
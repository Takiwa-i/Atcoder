#include <iostream>

int main(void)
{
	int k, a, b;

	std::cin >> k;
	std::cin >> a >> b;
	for (int i = a; i <= b; i++)
	{
		if (i % k == 0)
		{
			std::cout << "OK\n";
			return (0);
		}
	}
	std::cout << "NG\n";
	return (0);
}
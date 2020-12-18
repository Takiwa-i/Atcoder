#include <iostream>
#include <iomanip>

int main(void)
{
	int n;
	int count = 0;

	std::cin >> n;
	for (int i = 1; i <= n; i++)
	{
		if (i % 2 != 0)
			++count;
	}
	std::cout << std::fixed << std::setprecision(10) << (double)count / (double)n << std::endl;
	return (0);
}
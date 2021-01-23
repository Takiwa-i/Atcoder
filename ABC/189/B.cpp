#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

int main(void)
{
	long n, x;

	std::cin >> n >> x;
	long all = 0;
	x *= 100;
	for (int i = 0; i < n; i++)
	{
		long v, p;
		std::cin >> v >> p;
		all += v * p;
		if (all > x)
		{
			std::cout << i + 1 << std::endl;
			return (0);
		}
	}
	std::cout << -1 << std::endl;
	return (0);
}

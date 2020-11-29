#include <iostream>
#include <vector>
#include <algorithm>

int main(void)
{
	int n, k, m;
	int s = 0;
	int a;

	std::cin >> n >> k >> m;
	for (int i = 0; i < n - 1; i++)
	{
		std::cin >> a;
		s += a;
	}
	for (int i = 0; i <= k; i++)
	{
		if ((s + i) / n >= m)
		{
			std::cout << i << std::endl;
			return (0);
		}
	}
	std::cout << -1 << std::endl;
	return (0);
}
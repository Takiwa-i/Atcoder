#include <iostream>
#include <vector>
#include <algorithm>

int main(void)
{
	int n, x, y;

	std::cin >> n >> x >> y;
	--x;
	--y;
	std::vector<int> R(n, 0);
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			int d = std::min(abs(i - j), abs(i - x) + abs(j - y) + 1);
			R[d]++;
		}
	}
	for (int k = 1; k <= n - 1; k++)
		std::cout << R[k] << std::endl;
	return (0);
}
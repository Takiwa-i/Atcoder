#include <iostream>
#include <vector>
#include <algorithm>

#define WAR "War"
#define NOWAR "No War"

int main(void)
{
	int n, m, x, y;

	std::cin >> n >> m >> x >> y;
	std::vector<int> VX(n);
	std::vector<int> VY(m);
	for (int i = 0; i < n; i++)
		std::cin >> VX[i];
	for (int i = 0; i < m; i++)
		std::cin >> VY[i];
	std::sort(VX.begin(), VX.end());
	std::sort(VY.begin(), VY.end());
	int xn = VX[n - 1];
	int ym = VY[0];
	for (int i = x + 1; i <= y; i++)
	{
		if (i > xn && i <= ym)
		{
			std::cout << NOWAR << std::endl;
			return (0);
		}
	}
	std::cout << WAR << std::endl;
	return (0);
}


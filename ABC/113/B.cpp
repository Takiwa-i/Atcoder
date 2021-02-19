#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>

int main(void)
{
	int n;
	int t, a;
	std::cin >> n;
	std::cin >> t >> a;
	int dist = 1000000000;
	int ans;
	for (int i = 0; i < n; i++)
	{
		int h;

		std::cin >> h;
		if (dist > abs(1000 * a - (1000 * t - h * 6)))
		{
			dist = abs(1000 * a - (1000 * t - h * 6));
			ans = i;
		}
	}
	std::cout << ans + 1 << std::endl;
	return (0);
}
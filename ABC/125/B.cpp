#include <iostream>
#include <vector>
#include <algorithm>

int main(void)
{
	int n;
	int ans = -100000000;
	std::cin >> n;
	std::vector<int> V(n);
	std::vector<int> C(n);
	for (int i = 0; i < n; i++)
		std::cin >> V[i];
	for (int i = 0; i < n; i++)
		std::cin >> C[i];
	for (int bit = 0; bit < (1 << n); bit++)
	{
		int x = 0;
		int y = 0;
		for (int i = 0; i < n; i++)
		{
			if (bit & (1 << i))
			{
				x += V[i];
				y += C[i];
			}
		}
		ans = std::max(x - y, ans);
	}
	std::cout << ans << std::endl;
	return (0);
}
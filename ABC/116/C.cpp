#include <iostream>
#include <vector>
#include <algorithm>

int main(void)
{
	int n;
	int ans = 0;
	int cost = 0;
	std::cin >> n;
	std::vector<int> h(n);
	for (int i = 0; i < n; i++)
		std::cin >> h[i];
	h.push_back(0);
	for (int i = 1; i < h.size(); i++)
	{
		if (h[i - 1] > h[i])
		{
			ans += h[i - 1] - cost;
			cost = h[i];
		}
	}
	std::cout << ans << std::endl;
	return (0);
}
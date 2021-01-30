#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

int main(void)
{
	int n, m;
	int ans = 0;

	std::cin >> n >> m;
	std::vector<std::pair<int, int> > AB(m);
	for (int i = 0; i < m; i++)
	{
		std::cin >> AB[i].first >> AB[i].second;
		AB[i].first--;
		AB[i].second--;
	}
	int k;
	std::cin >> k;
	std::vector<std::pair<int, int> > CD(k);
	for (int i = 0; i < k; i++)
	{
		std::cin >> CD[i].first >> CD[i].second;
		CD[i].first--;
		CD[i].second--;
	}
	for (int bit = 0; bit < (1 << k); bit++)
	{
		std::vector<int> D(n, 0);
		for (int i = 0; i < k; i++)
		{
			if (bit & (1 << i))
				D[CD[i].first]++;
			else
				D[CD[i].second]++;
		}
		int pre = 0;
		for (int i = 0; i < m; i++)
		{
			if (D[AB[i].first] >= 1 && D[AB[i].second] >= 1)
				++pre;
		}
		ans = std::max(ans, pre);
	}
	std::cout << ans << std::endl;
	return (0);
}
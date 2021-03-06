#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

int main(void)
{
	int n;
	std::cin >> n;
	int ans = 300000;
	std::vector<std::pair<int, int> > AB(n);
	for (int i = 0; i < n; i++)
	{
		int a, b;
		std::cin >> a >> b;
		AB[i] = std::make_pair(a, b);
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			int p;
			if (i == j)
				p = AB[i].first + AB[j].second;
			else
			{
				p = std::max(AB[i].first, AB[j].second);
			}
			ans = std::min(ans, p);
		}
	}
	std::cout << ans << std::endl;
	return (0);
}

#include <iostream>
#include <algorithm>
#include <vector>

int main(void)
{
	int x, n;
	int dist = 100000000;
	int ans;

	std::cin >> x >> n;
	if (n == 0)
	{
		std::cout << x << std::endl;
		return (0);
	}
	std::vector<int> P(n);
	for (int i = 0 ; i < n; i++)
		std::cin >> P[i];
	std::sort(P.begin(), P.end());
	for (int i = 120; i > -10; i--)
	{
		if (*(std::lower_bound(P.begin(), P.end(), i)) == i)
			continue;
		if (std::abs(x - i) <= dist)
		{
			ans = i;
			dist = std::abs(x - i);
		}
	}
	std::cout << ans << std::endl;
	return (0);
}
#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

int main(void)
{
	int n, m;
	long long ans = 0;

	std::cin >> n >> m;
	std::vector<int> X(m);
	for (int i = 0; i < m; i++)
		std::cin >> X[i];
	std::sort(X.begin(), X.end());
	std::vector<long long> Dist;
	for (int i = 1; i < m; i++)
	{
		long long dist = (long long)(X[i] - X[i - 1]);
		ans += dist;
		Dist.push_back(dist);
	}
	std::sort(Dist.begin(), Dist.end(), std::greater<long long>());
	for (int i = 0; i < std::min(n - 1, (int)Dist.size()); i++)
		ans -= Dist[i];
	std::cout << ans << std::endl;
	return (0);
}
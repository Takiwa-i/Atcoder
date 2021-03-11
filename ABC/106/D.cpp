#include <iostream>
#include <vector>
#include <algorithm>

int main(void)
{
	int n, m, q;
	std::cin >> n >> m >> q;
	std::vector<int> L(m + 1, 0);
	std::vector<int> R(m + 1, 0);
	std::vector<std::vector<int> > X(n + 1, std::vector<int> (n + 1, 0));
	std::vector<std::vector<int> > C(n + 1, std::vector<int> (n + 1, 0));
	for (int i = 1; i <= m; i++)
	{
		std::cin >> L[i] >> R[i];
		X[L[i]][R[i]]++;
	}
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			C[i][j] = C[i][j - 1] + X[i][j];
		}
	}
	for (int i = 0; i < q; i++)
	{
		int p, q;
		int ans = 0;
		std::cin >> p >> q;
		for (int j = p; j <= q; j++)
			ans += C[j][q] - C[j][p - 1];
		std::cout << ans << std::endl;
	}
	return (0);
}
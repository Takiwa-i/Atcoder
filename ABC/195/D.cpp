#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <queue>
#include <map>

#define ll long long

int main(void)
{
	int n, m, q;
	std::cin >> n >> m >> q;
	std::vector<int> W(n);
	std::vector<int> V(n);
	for (int i = 0; i < n; i++)
		std::cin >> W[i] >> V[i];
	std::vector<int> X(m);
	for (int i = 0; i < m; i++)
		std::cin >> X[i];
	for (int count = 0; count < q; count++)
	{
		int l, r;
		std::cin >> l >> r;
		--l;
		--r;
		std::vector<int> Box;
		for (int i = 0; i < m; i++)
		{
			if (i < l || i > r)
				Box.push_back(X[i]);
		}
		std::sort(Box.begin(), Box.end());
		std::vector<bool> Used(n);
		int ans = 0;
		for (int i = 0; i < Box.size(); i++)
		{
			std::pair<int, int> Best = std::make_pair(-1, -1);
			for (int j = 0; j < n; j++)
			{
				if (Used[j])
					continue ;
				if (W[j] > Box[i])
					continue ;
				Best = std::max(Best, std::make_pair(V[j], j));
			}
			if (Best.second == -1)
				continue ;
			Used[Best.second] = true;
			ans += Best.first;
		}
		std::cout << ans << std::endl;
	}
	return (0);
}
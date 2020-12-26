#include <iostream>
#include <vector>
#include <algorithm>

class Unionfind
{
	public:
		std::vector<int> par;

		Unionfind(int n):par(n, -1)
		{}

		int find(int x)
		{
			if (par[x] < 0)
				return x;
			else
				return par[x] = find(par[x]);
		}

		void unite(int x, int y)
		{
			x = find(x);
			y = find(y);
			if (x == y)
				return;
			if (par[x] > par[y])
				std::swap(x, y);
			par[x] += par[y];
			par[y] = x;
		}

		bool same(int x, int y)
		{
			return find(x) == find(y);
		}

		int size(int x)
		{
			return -par[find(x)];
		}
};

int main(void)
{
	int n, m;
	int a, b;
	int ans = 0;
	std::cin >> n >> m;
	Unionfind U(n);
	for (int i = 0; i < m; i++)
	{
		std::cin >> a >> b;
		a--;
		b--;
		U.unite(a, b);
	}
	for (int i = 0; i < n; i++)
		ans = std::max(ans, U.size(i));
	std::cout << ans << std::endl;
	return (0);
}

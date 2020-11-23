#include <iostream>
#include <vector>

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
	int n, m, k;
	std::cin >> n >> m >> k;
	Unionfind relation(n);
	std::vector<int> non(n, 0);
	for (int i = 0; i < m; i++)
	{
		int a, b;
		std::cin >> a >> b;
		--a;
		--b;
		relation.unite(a, b);
		non[a]++;
		non[b]++;
	}
	for (int i = 0; i < k; i++)
	{
		int c, d;
		std::cin >> c >> d;
		--c;
		--d;
		if (relation.same(c, d))
		{
			non[c]++;
			non[d]++;
		}
	}
	for (int i = 0; i < n; i++)
	{
		int ans = relation.size(i) - 1 - non[i];
		if (ans <= 0)
			std::cout << 0 << " ";
		else
			std::cout << ans << " ";
	}
	std::cout << std::endl;
	return (0);
}
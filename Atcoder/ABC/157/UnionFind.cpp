#include <iostream>
#include <vector>

class Unionfind
{
	public:
		std::vector<int> par;

		Unionfind(int n):par(n)
		{
			for (int i = 0; i < n; i++)
			{
				par.at(i) = i;
			}
		}

		int find(int x)
		{
			if (par[x] == x)
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

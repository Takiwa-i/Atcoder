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
	long long n, m;

	std::cin >> n >> m;
	std::vector<int> A(m);
	std::vector<int> B(m);
	for (int i = 0; i < m; i++)
	{
		std::cin >> A[i] >> B[i];
		A[i]--;
		B[i]--;
	}
	Unionfind uf(n);
	long long current = n * (n - 1) / 2;
	std::vector<long long> Ans;
	for (int i = 0; i < m; i++)
	{
		Ans.push_back(current);
		int a = A[m - 1 - i];
		int b = B[m - 1 - i];
		if (uf.same(a, b))
			continue;
		long long diff_a = uf.size(a);
		long long diff_b = uf.size(b);
		current -= diff_a * diff_b;
		uf.unite(a, b);
	}
	std::reverse(Ans.begin(), Ans.end());
	for (int i = 0; i < Ans.size(); i++)
		std::cout << Ans[i] << std::endl;
	return (0);
}
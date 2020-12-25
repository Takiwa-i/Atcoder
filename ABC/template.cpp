#include <iostream>
#include <vector>


#define MOD 100000000

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



long long com(long long n, long long k)
{	
	if (n < k)
		return (0);
	if (n < 0 || k < 0)
		return (0);
	std::vector<long long> fact(n + 1);
	std::vector<long long> inv(n + 1);
	std::vector<long long> finv(n + 1);
	fact[0] = 1;
	fact[1] = 1;
	finv[0] = 1;
	finv[1] = 1;
	inv[1] = 1;
	for (long long i = 2; i < n + 1; i++)
	{
		fact[i] = i * fact[i - 1] % MOD;
		inv[i] = MOD - inv[MOD % i] * (MOD / i) % MOD;
		finv[i] = finv[i - 1] * inv[i] % MOD;
	}
	return (fact[n] * (finv[k] * finv[n - k] % MOD) % MOD);
}


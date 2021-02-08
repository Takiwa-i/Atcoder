#include <iostream>
#include <vector>


#define MOD 1000000007

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

std::vector<std::pair<long, long> > factorize(long long n)
{
	std::vector<std::pair <long,long> > res;
	for (long long i = 2; i * i <= n; i++)
	{
		if (n % i != 0)
			continue ;
		int num = 0;
		while (n % i == 0)
		{
			++num;
			n /= i;
		}
		res.push_back(std::make_pair(i, num));
	}
	if (n != 1)
		res.push_back(std::make_pair(n, 1));
	return (res);
}

long long gcd(long long a, long long b)
{
	if (b == 0)
		return (a);
	return (gcd(b, a % b));
}


long long power(long long x, long long n)
{
	long long ans = 1;
	while (n > 0)
	{
		if (n & 1)
			ans = ans * x % MOD;
		x = x * x % MOD;
		n /= 2;
	}
	return (ans);
}
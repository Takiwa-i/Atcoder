#include <iostream>
#include <vector>
#include <algorithm>

#define MOD 1000000007

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

int main(void)
{
	long long n, m;

	std::cin >> n >> m;
	std::vector<std::pair<long, long> > F = factorize(m);
	long long ans = 1;
	for (int i = 0; i < F.size(); i++)
	{
		long num = F[i].second;
		long long tmp = com(num + n - 1, n - 1);
		ans = (tmp * ans) % MOD;
	}
	std::cout << ans << std::endl;
	return (0);
}
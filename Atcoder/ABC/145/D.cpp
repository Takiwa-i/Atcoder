#include <iostream>
#include <vector>

#define MOD 1000000007

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
	long long x, y;
	long long n, m;

	std::cin >> x >> y;
	if ((x + y) % 3 != 0)
	{
		std::cout << 0 << std::endl;
		return (0);
	}
	n = (-x + y * 2) / 3;
	m = (x * 2 - y) / 3;
	std::cout << com(n + m, n) << std::endl;
	return (0);
}
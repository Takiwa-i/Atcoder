#include <iostream>

const long long MOD = 1000000007;

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

long long calc(long long n, long long a)
{
	long long ans = 1;
	long long y = 1;
	for (long long i = n; i > n - a; i--)
		ans = ans * i % MOD;
	for (long long i = 1; i <= a; i++)
		y = y * i % MOD;
	return (ans * power(y, MOD - 2) % MOD);
}

int main(void)
{
	long long n, a, b;
	long long total;
	std::cin >> n >> a >> b;
	total = power(2, n);
	std::cout << (MOD + MOD + total - calc(n, a) - calc(n, b) - 1) % MOD << std::endl;
	return (0);
}
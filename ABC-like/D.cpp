#include <iostream>
#include <vector>
#include <algorithm>

#define ll long long
#define MOD 1000000007

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

int main(void)
{
	ll n, p;
	std::cin >> n >> p;
	std::cout << power(p - 2, n - 1) * (p - 1) % MOD << std::endl;
	return (0);
}
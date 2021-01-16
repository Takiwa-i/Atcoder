#include <iostream>
#include <vector>
#include <algorithm>

#define MOD 1000000007

int main(void)
{
	int n;
	long long ans = 0;
	long long two = 1;
	std::cin >> n;
	std::vector<long long> A(n);
	for (int i = 0; i < n; i++)
		std::cin >> A[i];
	for (int d = 0; d < 60; d++)
	{
		long long p = 0;
		long long q = 0;
		for (int i = 0; i < n; i++)
		{
			if (A[i] & (1LL << d))
				++p;
			else
				++q;
		}
		long long add = (p * q) % MOD * two % MOD;
		ans = (ans + add) % MOD;
		two = (two * 2) % MOD;
	}
	std::cout << ans << std::endl;
	return (0);
}
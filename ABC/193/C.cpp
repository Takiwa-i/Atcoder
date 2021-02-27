#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>

#define ll long long

long long power(long long x, long long n)
{
	long long ans = 1;
	while (n > 0)
	{
		if (n & 1)
			ans = ans * x;
		x = x * x;
		n /= 2;
	}
	return (ans);
}

int main(void)
{
	ll n;
	ll ok = 0;

	std::cin >> n;
	std::vector<long long> OK;
	std::map<long long, long long> M;
	M[0] = false;
	M[1] = true;
	for (ll i = 2; i * i <= n; i++)
	{
		for (ll j = 2; power(i, j) <= n; j++)
		{
			ll p = power(i, j);
			if (M[p] == 0)
				++ok;
			M[p]++;
		}
	}
	std::cout << n - ok << std::endl;
	return (0);
}


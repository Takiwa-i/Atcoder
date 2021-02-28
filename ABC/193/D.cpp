#include <iomanip>
#include <iostream>
#include <string>
#include <vector>

#define ll long long

ll calc(std::string s)
{
	std::vector<ll> C(10, 0);
	for (int i = 1; i < 10; i++)
		C[i] = i;
	for (int i = 0; i < s.size(); i++)
	{
		C[s[i] - '0'] *= 10;
	}
	ll ans = 0;
	for (int i = 1; i < 10; i++)
	{
		ans += C[i];
	}
	return (ans);
}

int main(void)
{
	ll k;
	std::string s, t;

	std::cin >> k >> s >> t;
	std::vector<ll> Count(10, k);
	for (int i = 0; i < 5; i++)
	{
		Count[s[i] - '0']--;
		Count[t[i] - '0']--;
	}
	ll win = 0;
	for (ll x = 1; x < 10; x++)
	{
		for (ll y = 1; y < 10; y++)
		{
			s.back() = '0' + x;
			t.back() = '0' + y;
			if (calc(s) <= calc(t))
				continue ;
			if (x == y)
				win += Count[x] * (Count[y] - 1);
			else
				win += Count[x] * Count[y];
		}
	}
	ll r = 9 * k - 8;
	std::cout << std::fixed << std::setprecision(15) << (double)(win) / r / (r - 1) << std::endl;
	return (0);
	
	
}
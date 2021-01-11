#include <iostream>
#include <vector>
#include <algorithm>

#define ll long long

int main(void)
{
	ll n, c;

	std::cin >> n >> c;
	std::vector<std::pair<ll, ll> > A;
	for (int i = 0; i < n; i++)
	{
		ll a, b, c;
		std::cin >> a >> b >> c;
		A.push_back(std::make_pair(a - 1, c));
		A.push_back(std::make_pair(b, -c));
	}
	std::sort(A.begin(), A.end());
	ll ans, pre, cost;
	ans = 0;
	pre = 0;
	cost = 0;
	for (int i = 0; i < A.size(); i++)
	{
		ll x = A[i].first;
		ll y = A[i].second;
		if (x != pre)
		{
			ans += std::min(c, cost) * (x - pre);
			pre = x;
		}
		cost += y;
	}
	std::cout << ans << std::endl;
	return (0);
}
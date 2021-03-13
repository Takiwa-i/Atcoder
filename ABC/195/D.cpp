#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <queue>
#include <map>

#define ll long long

int main(void)
{
	int n, m, q;
	std::cin >> n >> m >> q;
	std::vector<std::pair<ll, ll> > V(n);
	std::vector<ll> X(m);
	for (int i = 0; i < n; i++)
	{
		ll w, v;
		std::cin >> w >> v;
		V[i] = std::make_pair(w, v);
	}
	std::sort(V.begin(), V.end());
	for (int i = 0; i < m; i++)
	{
		std::cin >> X[i];
	}
	std::sort(X.begin(), X.end());
	std::vector<ll> A(q);
	for (int i = 0; i < q; i++)
	{
		int l, r;
		ll ans = 0;
		std::cin >> l >> r;
		l--;
		r--;
		std::queue<ll> Q;
		std::map<int, int> D;
		for (int j = 0; j < m; j++)
		{
			if (j >= l && j <= r)
				continue ;
			Q.push(X[j]);
		}
		while (!Q.empty() && D.size() < n)
		{
			ll top = Q.front();
			Q.pop();
			for (int j = 0; j < n; j++)
			{
				if (D[j] > 0 || V[j].first > top)
					continue;
				else
				{
					ans += V[j].second;
					D[j]++;
					break ;
				}
			}
		}
		A[i] = ans;
	}
	for (int i = 0; i < q; i++)
		std::cout << A[i] << std::endl;
	return (0);
}
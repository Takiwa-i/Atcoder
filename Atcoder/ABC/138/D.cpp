#include <iostream>
#include <vector>
#include <algorithm>

#define ll long long

void rec_opr(std::vector<std::vector<ll> > &tree, std::vector<ll> &counter, ll now, ll parent)
{
	if (parent != -1)
		counter[now] += counter[parent];
	for (int i = 0; i < tree[now].size(); i++)
	{
		if (tree[now][i] != parent)
			rec_opr(tree, counter, tree[now][i], now);
	}
}

int main(void)
{
	ll n, q;
	ll a, b;
	ll p, x;

	std::cin >> n >> q;
	std::vector<std::vector<ll> > tree(n);
	std::vector<ll> counter(n, 0);
	for (int i = 0; i < n - 1; i++)
	{
		std::cin >> a >> b;
		a--;
		b--;
		tree[a].push_back(b);
		tree[b].push_back(a);
	}
	for (int i = 0; i < q; i++)
	{
		std::cin >> p >> x;
		p--;
		counter[p] += x;
	}
	rec_opr(tree, counter, 0, -1);
	for (std::vector<ll>::iterator i = counter.begin(); i != counter.end(); i++)
		std::cout << *i << " ";
	std::cout << std::endl;
	return (0);

}
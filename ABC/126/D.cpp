#include <iostream>
#include <vector>
#include <algorithm>

void dfs(std::vector<std::vector<std::pair<int, int> > > &G, std::vector<int> &A, int now, int parent, int color)
{
	A[now] = color;
	for (int i = 0; i < G[now].size(); i++)
	{
		if (G[now][i].first == parent)
			continue ;
		if (G[now][i].second % 2 == 1)
			dfs(G, A, G[now][i].first, now, 1 - color);
		else
			dfs(G, A, G[now][i].first, now, color);
	}
}


int main(void)
{
	int n;

	std::cin >> n;
	std::vector<std::vector<std::pair<int, int> > > G(n);
	std::vector<int> Ans(n, 0);
	for (int i = 0; i < n - 1; i++)
	{
		int u, v, w;
		std::cin >> u >> v >> w;
		--u;
		--v;
		G[u].push_back(std::make_pair(v, w));
		G[v].push_back(std::make_pair(u, w));
	}
	dfs(G, Ans, 0, -1, 0);
	for (int i = 0; i < n; i++)
		std::cout << Ans[i] << std::endl;
	return (0);
}
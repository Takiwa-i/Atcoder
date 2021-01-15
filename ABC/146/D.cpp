#include <iostream>
#include <vector>
#include <algorithm>

void dfs(std::vector<std::vector<std::pair<int, int> > >&T, std::vector<int> &C, int parent_color, int parent, int now)
{
	int color = 1;
	if (color == parent_color)
		++color;
	for (int i = 0; i < T[now].size(); i++)
	{
		if (T[now][i].first == parent)
			continue;
		C[T[now][i].second] = color;
		dfs(T, C, color, now, T[now][i].first);
		++color;
		if (color == parent_color)
			++color;
	}
}

int main(void)
{
	int n;
	int all_color = 0;

	std::cin >> n;
	std::vector<std::vector<std::pair<int, int> > > T(n);
	std::vector<int> C(n - 1, -1);
	for (int i = 0; i < n - 1; i++)
	{
		int a, b;
		std::cin >> a >> b;
		--a;
		--b;
		T[a].push_back(std::make_pair(b, i));
		T[b].push_back(std::make_pair(a, i));
	}
	for (int i = 0; i < n; i++)
		all_color = std::max((int)T[i].size(), all_color);
	dfs(T, C, 0, -1, 0);
	std::cout << all_color << std::endl;
	for (int i = 0; i < n - 1; i++)
		std::cout << C[i] << std::endl;
	return (0);
}
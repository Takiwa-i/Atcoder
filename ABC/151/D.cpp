#include <iostream>
#include <vector>
#include <queue>
#include <string>
#include <algorithm>

int bfs(std::vector<std::string> &G, int x, int y)
{
	const int dx[4] = {1, 0, -1, 0};
	const int dy[4] = {0, 1, 0, -1};
	int h = G.size();
	int w = G[0].size();
	int ans = 0;
	std::vector<std::vector<int> > Dist(h, std::vector<int>(w, -1));
	std::queue<std::pair<int, int> > Q;
	Q.push(std::make_pair(x, y));
	Dist[x][y] = 0;
	while (!Q.empty())
	{
		int ox, oy;
		ox = Q.front().first;
		oy = Q.front().second;
		ans = std::max(ans, Dist[ox][oy]);
		Q.pop();
		for (int i = 0; i < 4; i++)
		{
			int nx = ox + dx[i];
			int ny = oy + dy[i];
			if (nx < 0 || nx >= h || ny < 0 || ny >= w)
				continue ;
			if (G[nx][ny] == '#')
				continue ;
			if (Dist[nx][ny] == -1)
			{
				Dist[nx][ny] = Dist[ox][oy] + 1;
				Q.push(std::make_pair(nx, ny));
			}
		}
	}
	return (ans);
}

int main(void)
{
	int h, w;
	int ans = 0;

	std::cin >> h >> w;
	std::vector<std::string> G(h);
	for (int i = 0; i < h; i++)
		std::cin >> G[i];
	for (int i = 0; i < h; i++)
	{
		for (int j = 0; j < w; j++)
		{
			if (G[i][j] == '#')
				continue ;
			ans = std::max(ans, bfs(G, i, j));
		}
	}
	std::cout << ans << std::endl;
	return (0);
}
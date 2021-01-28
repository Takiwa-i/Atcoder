#include <iostream>
#include <vector>
#include <string>
#include <deque>
#include <algorithm>

#define INF 100000000

int main(void)
{
	int h, w;
	int sx, sy;
	int gx, gy;
	std::cin >> h >> w;
	std::cin >> sx >> sy;
	std::cin >> gx >> gy;
	--sx;
	--sy;
	--gx;
	--gy;
	std::vector<std::string> M(h);
	for (int i = 0; i < h; i++)
		std::cin >> M[i];
	std::vector<std::vector<int> > Cost(h, std::vector<int>(w, INF));
	Cost[sx][sy] = 0;
	std::deque<std::pair<int, int> > Q;
	Q.push_front(std::make_pair(sx, sy));
	const int dx[4] = {0, 0, 1, -1};
	const int dy[4] = {1, -1, 0, 0};
	while (!Q.empty())
	{
		std::pair<int, int> P = Q.front();
		Q.pop_front();
		int x = P.first;
		int y = P.second;
		for (int i = 0; i < 4; i++)
		{
			int nx = dx[i] + x;
			int ny = dy[i] + y;
			if (nx < 0 || ny < 0 || nx >= h || ny >= w || M[nx][ny] == '#')
				continue ;
			if (Cost[nx][ny] > Cost[x][y])
			{
				Cost[nx][ny] = Cost[x][y];
				Q.push_front(std::make_pair(nx, ny));
			}
		}
		for (int i = -2; i <= 2; i++)
		{
			for (int j = -2; j <= 2; j++)
			{
				if (i == 0 && j == 0)
					continue ;
				int nx = x + i;
				int ny = y + j;
				if (nx < 0 || ny < 0 || nx >= h || ny >= w || M[nx][ny] == '#')
					continue ;
				if (Cost[nx][ny] > Cost[x][y] + 1)
				{
					Cost[nx][ny] = Cost[x][y] + 1;
					Q.push_back(std::make_pair(nx, ny));
				}
	
			}
		}
	}
	int ans = Cost[gx][gy] - Cost[sx][sy];
	if (ans == INF)
		std::cout << -1 << std::endl;
	else
		std::cout << ans << std::endl;
	return (0);
}
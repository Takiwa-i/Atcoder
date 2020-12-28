#include <iostream>
#include <vector>
#include <algorithm>

void bfs(std::vector<std::vector<char> > &M, int cx, int cy, int dx, int dy, int *ans, int h, int w, int *re)
{
	M[cx][cy] = 'd';
	if (cx == dx && cy == dy)
	{
		*re = std::min(*re, *ans);
		return ;
	}
	if (cx - 1 >= 0 && M[cx - 1][cy] == '.')
		bfs(M, cx -1, cy, dx, dy, ans, h, w, re);
	if (cx + 1 < h && M[cx + 1][cy] == '.')
		bfs(M, cx + 1, cy, dx, dy, ans, h, w, re);
	if (cy - 1 >= 0 && M[cx][cy - 1] == '.')
		bfs(M, cx, cy - 1, dx, dy, ans, h, w, re);
	if (cy + 1 < w && M[cx][cy + 1] == '.')
		bfs(M, cx, cy + 1, dx, dy, ans, h, w, re);
	else
	{
		for (int i = -2; i <= 2; i++)
		{
			for (int j = -2; j <= 2; j++)
			{
				if (cx + i >= 0 && cx + i < h && cy + j >= 0 && cy + j < w && M[cx + i][cy + j] == '.')
				{
					(*ans)++;
					bfs(M, cx + i, cy + j, dx, dy, ans, h, w, re);
				}
			}
		}
	}	
}


int main(void)
{
	int h, w, ans;
	ans = 0;
	int re = 1000000;
	std::cin >> h >> w;
	int cx, cy;
	std::cin >> cx >> cy;
	cx--;
	cx--;
	int dx, dy;
	std::cin >> dx >> dy;
	dx--;
	dy--;
	std::vector<std::vector<char> > M(h);
	for (int i = 0; i < h; i++)
	{
		for (int j = 0; j < w; j++)
		{
			char s;
			std::cin >> s;
			M[h].push_back(s);
		}
	}
	bfs(M, cx, cx, dx, dy, &ans, h, w, &re);
	if (re == 1000000)
		std::cout << -1 << std::endl;
	else
		std::cout << re << std::endl;
	return (0);

}
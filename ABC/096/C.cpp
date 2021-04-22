#include <iostream>
#include <vector>
#include <algorithm>
#include <string>


bool check(std::vector<std::string> &M, int h, int w, int i, int j)
{
	const int dx[4] = {1, 0, -1, 0};
	const int dy[4] = {0, -1, 0, 1};

	for (int n = 0; n < 4; n++)
	{
		int nx = dx[n] + j;
		int ny = dy[n] + i;
		if (nx >= 0 && nx < w && ny >= 0 && ny < h && M[ny][nx] == '#')
			return (true);
	}
	return (false);
}

int main(void)
{
	int h, w;
	std::cin >> h >> w;
	std::vector<std::string> M(h);
	for (int i = 0; i < h; i++)
		std::cin >> M[i];
	for (int i = 0; i < h; i++)
	{
		for (int j = 0; j < w; j++)
		{
			if (M[i][j] == '#')
			{
				if (!check(M, h, w, i, j))
				{
					std::cout << "No" << std::endl;
					return (0);
				}
			}
		}
	}
	std::cout << "Yes" << std::endl;
	return (0);
}
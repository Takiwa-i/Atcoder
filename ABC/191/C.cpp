#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

bool check(std::vector<std::string> &S, int i, int j)
{
	const int dx[4] = {0, 0, -1, -1};
	const int dy[4] = {0, -1, -1, 0};
	int black = 0;

	for (int p = 0; p < 4; p++)
	{
		int nx = i + dx[p];
		int ny = j + dy[p];
		if (S[nx][ny] == '#')
			++black;
	}
	if (black == 1 || black == 3)
		return (true);
	return (false);
}

int main(void)
{
	int h, w;

	std::cin >> h >> w;
	std::vector<std::string> S(h);
	for (int i = 0; i < h; i++)
		std::cin >> S[i];
	int ans = 0;
	for (int i = 1; i < h; i++)
	{
		for (int j = 1; j < w; j++)
		{
			if (check(S, i, j))
				++ans;
		}
	}
	std::cout << ans << std::endl;
	return (0);
}
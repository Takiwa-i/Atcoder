#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

int main(void)
{
	int h, w, x, y;
	int ans = 1;

	std::cin >> h >> w >> x >> y;
	std::vector<std::string> S(h);
	for (int i = 0; i < h; i++)
		std::cin >> S[i];
	x--;
	y--;
	for (int i = y + 1; i < w; i++)
	{
		if (S[x][i] == '.')
			++ans;
		if (S[x][i] == '#')
			break ;
	}
	for (int i = y - 1; i >= 0; i--)
	{
		if (S[x][i] == '.')
			++ans;
		if (S[x][i] == '#')
			break ;
	}
	for (int i = x + 1; i < h; i++)
	{
		if (S[i][y] == '.')
			++ans;
		if (S[i][y] == '#')
			break ;
	}
	for (int i = x - 1; i >= 0; i--)
	{
		if (S[i][y] == '.')
			++ans;
		if (S[i][y] == '#')
			break ;
	}
	std::cout << ans << std::endl;
	return (0);
}
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

int main(void)
{
	int h, w;
	int ans = 0;
	std::cin >> h >> w;
	std::vector<std::string> M(h);
	for (int i = 0; i < h; i++)
		std::cin >> M[i];
	std::vector<std::vector<int> > L(h, std::vector<int>(w, 0));
	std::vector<std::vector<int> > R(h, std::vector<int>(w, 0));
	std::vector<std::vector<int> > U(h, std::vector<int>(w, 0));
	std::vector<std::vector<int> > D(h, std::vector<int>(w, 0));
	for (int i = 0; i < h; i++)
	{
		int count = 0;
		for (int j = 0; j < w; j++)
		{
			if (M[i][j] == '#')
				count = 0;
			else
				count++;
			L[i][j] = count;
		}
	}
	for (int i = 0; i < h; i++)
	{
		int count = 0;
		for (int j = w - 1; j >= 0; j--)
		{
			if (M[i][j] == '#')
				count = 0;
			else
				count++;
			R[i][j] = count;
		}
	}
	for (int j = 0; j < w; j++)
	{
		int count = 0;
		for (int i = 0; i < h; i++)
		{
			if (M[i][j] == '#')
				count = 0;
			else
				count++;
			D[i][j] = count;
		}
	}
	for (int j = 0; j < w; j++)
	{
		int count = 0;
		for (int i = h - 1; i >= 0; i--)
		{
			if (M[i][j] == '#')
				count = 0;
			else
				count++;
			U[i][j] = count;
		}
	}
	for (int i = 0; i < h; i++)
	{
		for (int j = 0; j < w; j++)
		{
			if (M[i][j] == '.')
			{
				int pre = R[i][j] + L[i][j] + U[i][j] + D[i][j] - 3;
				ans = std::max(ans, pre);
			}
		}
	}
	std::cout << ans << std::endl;
	return (0);
}
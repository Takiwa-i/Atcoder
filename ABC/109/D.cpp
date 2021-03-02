#include <iostream>
#include <vector>
#include <algorithm>


int main(void)
{
	int h, w;
	int odd = 0;

	std::cin >> h >> w;
	std::vector<std::vector<int> > MAP(h, std::vector<int> (w, 0));
	for (int i = 0; i < h; i++)
	{
		for (int j = 0; j < w; j++)
		{
			std::cin >> MAP[i][j];
			if (MAP[i][j] % 2 == 1)
				++odd;
		}
	}
	std::vector<std::pair<std::pair<int, int>, std::pair<int, int> > > ANS;
	int done = 0;
	int x = 0;
	int y = 0;
	for (int i  = 0; i < h * w; i++)
	{
		if (MAP[x][y] % 2 == 1)
			++done;
		int nx = x;
		int ny = y;
		if (x % 2 == 0)
		{
			if (ny == w - 1)
				++nx;
			else
				++ny;
		}
		else
		{
			if (ny == 0)
				++nx;
			else
				--ny;
		}
		if (done % 2 == 1 && done < odd)
			ANS.push_back(std::make_pair(std::make_pair(x, y), std::make_pair(nx, ny)));
		x = nx;
		y = ny;
	}
	std::cout << ANS.size() << std::endl;
	for (int i = 0; i < ANS.size(); i++)
	{
		std::cout << ANS[i].first.first + 1 << " " << ANS[i].first.second + 1 << " " << ANS[i].second.first + 1 << " " << ANS[i].second.second + 1 << std::endl;
	}
	return (0);
}
#include <iostream>
#include <vector>
#include <algorithm>

void paint_map(std::vector<std::vector<char> >& MAP_CP, int bith, int bitw, int h, int w)
{
	for (int i = 0; i < h; i++)
	{
		if (bith & (1 << i))
		{
			for (int x = 0; x < w; x++)
				MAP_CP[i][x] = 'r';
		}
	}
	for (int i = 0; i < w; i++)
	{
		if (bitw & (1 << i))
		{
			for (int y = 0; y < h; y++)
				MAP_CP[y][i] = 'r';
		}
	}	
}

int count_black(std::vector<std::vector<char> >& MAP_CP, int h, int w)
{
	int count = 0;
	for (int i = 0; i < h; i++)
	{
		for (int j = 0; j < w; j++)
		{
			if (MAP_CP[i][j] == '#')
				++count;
		}
	}
	return (count);
}

int main(void)
{
	int h, w, k;
	int ans = 0;

	std::cin >> h >> w >> k;
	std::vector<std::vector <char> > MAP(h + 1, std::vector<char>(w + 1));
	std::vector<std::vector <char> > MAP_CP(h + 1, std::vector<char>(w + 1));
	for (int i = 0; i < h; i++)
	{
		for (int j = 0; j < w; j++)
			std::cin >> MAP[i][j];
	}
	for (int bith = 0; bith < (1 << h); bith++)
	{
		for (int bitw = 0; bitw < (1 << w); bitw++)
		{
			MAP_CP = MAP;
			paint_map(MAP_CP, bith, bitw, h, w);
			if (count_black(MAP_CP, h, w) == k)
				++ans;
		}
	}
	std::cout << ans << std::endl;
	return (0);
}
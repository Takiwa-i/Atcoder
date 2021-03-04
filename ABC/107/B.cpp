#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

bool empty_vertical(std::vector<std::string> &A, int i, int h)
{
	for (int j = 0; j < h; j++)
	{
		if (A[j][i] == '#')
			return (false);
	}
	return (true);
}

bool empty_horizon(std::string &s, int w)
{
	for (int i = 0; i < w; i++)
	{
		if (s[i] == '#')
			return (false);
	}
	return (true);
}

int main(void)
{
	int h, w;
	std::cin >> h >> w;
	std::vector<std::string> A(h);
	for (int i = 0; i < h; i++)
		std::cin >> A[i];
	std::vector<std::vector<bool> > M(h, std::vector<bool> (w, true));
	for (int i = 0; i < h; i++)
	{
		if (empty_horizon(A[i], w))
		{
			for (int j = 0; j < w; j++)
				M[i][j] = false;
		}
	}
	for (int i = 0; i < w; i++)
	{
		if (empty_vertical(A, i, h))
		{
			for (int j = 0; j < h; j++)
				M[j][i] = false;
		}
	}
	for (int i = 0; i < h; i++)
	{
		bool end = false;
		for (int j = 0; j < w; j++)
		{
			if (M[i][j] == true)
			{
				std::cout << A[i][j];
				end = true;
			}
		}
		if (end)
			std::cout << std::endl;
	}
	return (0);
}
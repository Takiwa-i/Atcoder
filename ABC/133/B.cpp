#include <iostream>
#include <vector>
#include <algorithm>

int main(void)
{
	int n, d, ans;
	long long dist;

	std::cin >> n >> d;
	ans = 0;	
	std::vector<std::vector<long long> > X(n);
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < d; j++)
		{
			long long x;
			std::cin >> x;
			X[i].push_back(x);
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			dist = 0;
			for (int x = 0; x < d; x++)
				dist += (X[i][x] - X[j][x]) * (X[i][x] - X[j][x]);
			for (long long y = 2; y * y <= dist; y++)
			{
				if (y * y == dist)
					++ans;
			}
			if (dist == 1)
				++ans;
		}
	}
	std::cout << ans << std::endl;
	return (0);
}
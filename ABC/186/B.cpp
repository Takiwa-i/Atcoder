#include <iostream>
#include <vector>
#include <algorithm>

int main(void)
{
	int h, w;
	int m = 101;
	long long ans = 0;
	std::cin >> h >> w;
	std::vector<std::vector<int> > A(h);
	for (int i = 0; i < h; i++)
	{
		for (int j = 0; j < w; j++)
		{
			int a;
			std::cin >> a;
			A[i].push_back(a);
			m = std::min(m, a);
		}
	}
	for (int i = 0; i < h; i++)
	{
		for (int j = 0; j < w; j++)
		{
			if (A[i][j] > m)
				ans += (long long)(A[i][j] - m);
		}
	}
	std::cout << ans << std::endl;
	return (0);
}
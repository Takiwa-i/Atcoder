#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <cmath>

int stair(int n)
{
	int ans = 1;

	while (n > 1)
	{
		ans *= n;
		n--;	
	}
	return(ans);
}

int main(void)
{
	int n;
	double x, y;
	long double dist = 0.0;

	std::cin >> n;
	std::vector<std::pair<int, int> > p(n);
	std::vector<int> pts(n);
	for (int i = 0 ; i < n; i++)
	{
		std::cin >> x >> y;
		std::pair<int, int> xy;
		xy.first = x;
		xy.second = y;
		p[i] = xy;
		pts[i] = i;
	}
	do
	{
		for (int i = 0; i < n - 1; i++)
		{
			dist += std::sqrt((p[pts[i]].first - p[pts[i + 1]].first) * (p[pts[i]].first - p[pts[i + 1]].first) + (p[pts[i]].second - p[pts[i + 1]].second) * (p[pts[i]].second - p[pts[i + 1]].second));
		}
	} while (std::next_permutation(pts.begin(), pts.end()));
	double ans = dist / (double) stair(n);
	std::cout << std::fixed << std::setprecision(10) << ans << std::endl;
	return (0);
}

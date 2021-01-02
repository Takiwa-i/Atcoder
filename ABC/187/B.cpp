#include <iostream>
#include <vector>

int main(void)
{
	int n;
	int ans = 0;
	std::cin >> n;
	std::vector<std::pair <double, double> > P(n);
	for (int i = 0; i < n; i++)
	{
		double x, y;
		std::cin >> x >> y;
		P[i].first = x;
		P[i].second = y;
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			double v = (P[i].second - P[j].second) / (P[i].first - P[j].first);
			if (v >= -1 && v <= 1)
				++ans;
		}
	}
	std::cout << ans << std::endl;
	
	return (0);
}
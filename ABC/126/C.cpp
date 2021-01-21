#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>

int main(void)
{
	int n, k;

	std::cin >> n >> k;
	long long score;
	double ans = 0;
	for (int i = 1; i <= n; i++)
	{
		score = (long long)i;
		double prob = 1.0 / n;
		while (score < k)
		{
			prob *= 0.5;
			score *= 2;
		}
		ans += prob;
	}
	std::cout << std::fixed << std::setprecision(15) << ans << std::endl;
	return (0);
}
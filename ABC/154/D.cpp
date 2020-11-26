#include <iostream>
#include <vector>
#include <iomanip>
#include <algorithm>

int main(void)
{
	int n, k;
	long long ans = 0;
	std::cin >> n >> k;
	std::vector<long long> p(n);
	std::vector<long long> e(n + 1, 0);
	for (int i = 0; i < n; i++)
		std::cin >> p[i];
	for (int i = 0; i < n; i++)
	{
		e[i + 1] = e[i] + p[i] + 1; 
	}
	for (int i = 0; i + k <= n; i++)
	{
		ans = std::max(ans, e[i + k] - e[i]);
	}
	std::cout << std::fixed << std::setprecision(12) << (double)(ans) / 2 << std::endl;
	return (0);
}
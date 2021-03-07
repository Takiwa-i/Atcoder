#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>

int main(void)
{
	int n;

	std::cin >> n;
	double ans = 0;
	for (int i = 1; i < n; i++)
	{
		ans += (double)n / (n - i);
	}
	std::cout << std::fixed << std::setprecision(10) << ans << std::endl;
	return (0);
}

#include <iostream>
#include <vector>
#include <algorithm>

int main(void)
{
	int n;
	int ans = 0;
	std::cin >> n;
	std::vector <int> d(n);
	for (int i = 0; i < n; i++)
		std::cin >> d[i];
	std::sort(d.begin(), d.end());
	if (n % 2 != 0)
	{
		std::cout << ans << std::endl;
		return (0);
	}
	ans = d[n / 2] - d[n / 2 - 1];
	std::cout << ans << std::endl;
	return (0);
}
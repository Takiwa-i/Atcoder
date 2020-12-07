#include <iostream>
#include <vector>
#include <algorithm>

int main(void)
{
	int n;
	int ans = 0;

	std::cin >> n;
	std::vector<int> d(n, 0);
	for (int i = 0; i < n; i++)
		std::cin >> d[i];
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
			ans += d[i] * d[j];
	}
	std::cout << ans << std::endl;
	return (0);
}
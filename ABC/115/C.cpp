#include <iostream>
#include <vector>
#include <algorithm>

int main(void)
{
	int n, k;
	long long ans = 1000000000;
	std::cin >> n >> k;
	std::vector<long long> H(n);
	for (int i = 0; i < n; i++)
		std::cin >> H[i];
	std::sort(H.begin(), H.end());
	for (int i = 0; i + k - 1 < n; i++)
		ans = std::min(ans, H[i + k - 1] - H[i]);
	std::cout << ans << std::endl;
	return (0);
}
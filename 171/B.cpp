#include <iostream>
#include <vector>
#include <algorithm>

int main(void)
{
	int n, k;
	int ans = 0;

	std::cin >> n >> k;
	std::vector<int> P(n);
	for (int i = 0; i < n; i++)
		std::cin >> P[i];
	std::sort(P.begin(), P.end());
	for (int i = 0; i < k; i++)
		ans += P[i];
	std::cout << ans << std::endl;
	return (0);
}

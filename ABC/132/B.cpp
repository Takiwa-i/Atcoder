#include <iostream>
#include <vector>
#include <algorithm>

int main(void)
{
	int n;
	int ans = 0;
	std::cin >> n;
	std::vector<int> P(n);
	for (int i = 0; i < n; i++)
		std::cin >> P[i];
	for (int i = 0; i < n - 2; i++)
	{
		if ((P[i] < P[i + 1] && P[i + 1] < P[i + 2]) || (P[i] > P[i + 1] && P[i + 1] > P[i + 2]))
			++ans;
	}
	std::cout << ans << std::endl;
	return (0);
}
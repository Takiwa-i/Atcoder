#include <iostream>
#include <vector>
#include <algorithm>

int main(void)
{
	int n;
	std::cin >> n;
	std::vector<int> H(n);
	for (int i = 0; i < n; i++)
		std::cin >> H[i];
	std::vector<int> DP(n, 0);
	DP[1] = abs(H[0] - H[1]);
	for (int i = 2; i < n; i++)
		DP[i] = std::min((abs(H[i - 2] - H[i]) + DP[i - 2]), (abs(H[i - 1] - H[i]) + DP[i - 1]));
	std::cout << DP[n - 1] << std::endl;
	return (0);
}

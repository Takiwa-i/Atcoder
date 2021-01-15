#include <iostream>
#include <vector>
#include <algorithm>

int main(void)
{
	int n;
	int ans = 10000000;

	std::cin >> n;
	std::vector<int> W(n);
	std::vector<int> S(n, 0);
	for (int i = 0; i < n; i++)
		std::cin >> W[i];
	S[0] += W[0];
	for (int i = 1; i < n; i++)
		S[i] = S[i - 1] + W[i];
	for (int i = 0; i < n; i++)
		ans = std::min(ans, abs(S[i] - S[n - 1] + S[i]));
	std::cout << ans << std::endl;
	return (0);
}
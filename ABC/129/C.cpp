#include <iostream>
#include <vector>
#include <algorithm>

#define MOD 1000000007

int main(void)
{
	int n, m;

	std::cin >> n >> m;
	std::vector<int> DP(n + 1, 0);
	std::vector<bool> S(n + 1, true);
	for (int i = 0; i < m; i++)
	{
		int a;
		std::cin >> a;
		S[a] = false;
	}
	DP[0] = 1;
	if (S[1])
		DP[1] = 1;
	else
		DP[1] = 0;
	for (int i = 2; i <= n; i++)
	{
		if (S[i] == false)
			DP[i] = 0;
		else
			DP[i] = (DP[i - 1] + DP[i - 2]) % MOD;
	}
	std::cout << DP[n] << std::endl;
	return (0);
}
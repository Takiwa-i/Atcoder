#include <iostream>
#include <vector>

#define MOD 1000000007

int main(void)
{
	int s;

	std::cin >> s;
	std::vector<long long> dp(s + 1, 0);
	dp[0] = 1;
	for (int i = 3; i <= s; i++)
	{
		long long sum = 0;
		for (int j = 3; j <= i; j++)
		{
			sum += dp[i - j] % MOD;
			sum %= MOD;
		}
		dp[i] = sum;
	}
	std::cout << dp[s] << std::endl;
	return (0);
}
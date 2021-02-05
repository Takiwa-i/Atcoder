#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

#define MOD 1000000007
long long dp[101][4][4][4];

bool no_good(int a, int b, int c)
{
	return (a == 1 && b == 2 && c == 3);
}

int main(void)
{
	int n;

	std::cin >> n;
	dp[0][0][0][0] = 1;
	for (int len = 0; len < n; len++)
	{
		for (int a = 0; a < 4; a++)
		{
			for (int b = 0; b < 4; b++)
			{
				for (int c = 0; c < 4; c++)
				{
					for (int d = 0; d < 4; d++)
					{
						if (no_good(b, c, d) || no_good(c, b, d) || no_good(b, d, c))
							continue ;
						if (no_good(a, c, d) || no_good(a, b, d))
							continue ;
						dp[len + 1][b][c][d] += dp[len][a][b][c];
						dp[len + 1][b][c][d] %= MOD;
					}
				}
			}
		}
	}
	long long ans = 0;
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			for (int k = 0; k < 4; k++)
			{
				ans += dp[n][i][j][k];
				ans %= MOD;
			}
		}
	}
	std::cout << ans << std::endl;
	return (0);
}
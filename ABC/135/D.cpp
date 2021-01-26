#include <iostream>
#include <vector>
#include <string>

#define MOD 1000000007
int main(void)
{
	std::string s;

	std::cin >> s;
	std::vector<std::vector<long long> > DP(s.size() + 1, std::vector<long long>(13, 0));
	DP[0][0] = 1;
	for (int i = 0; i < s.size(); i++)
	{
		for (int j = 0; j < 13; j++)
		{
			if (s[i] == '?')
			{
				for (int x = 0; x < 10; x++)
				{
					DP[i + 1][(j * 10 + x) % 13] = (DP[i + 1][(j * 10 + x) % 13] + DP[i][j]) % MOD;
				}
			}
			else
			{
				int n;
				n = s[i] - '0';
				DP[i + 1][(10 * j + n) % 13] = (DP[i + 1][(10 * j + n) % 13] + DP[i][j]) % MOD;
			}
		}
	}
	std::cout << DP[s.size()][5] << std::endl;
	return (0);
}
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

long long power(long long x, long long n)
{
	long long ans = 1;
	while (n > 0)
	{
		if (n & 1)
			ans = ans * x;
		x = x * x;
		n /= 2;
	}
	return (ans);
}

int main(void)
{
	int n;

	std::cin >> n;
	std::vector<std::string> S(n);
	for (int i = 0; i < n; i++)
		std::cin >> S[i];
	std::vector<long long>DP(n + 1, 0);
	DP[0] = 1;
	for (int i = 1; i <= n; i++)
	{
		if (S[i - 1] == "AND")
		{
			DP[i] = DP[i - 1];
		}
		else
		{
			DP[i] = DP[i - 1] * 2 + power(2, i) - DP[i - 1];
		}
	}
	std::cout << DP[n] << std::endl;
	return (0);
}

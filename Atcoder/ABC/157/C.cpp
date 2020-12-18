#include <iostream>
#include <vector>
#include <algorithm>

int pow_n(int n)
{
	int ans = 1;
	for (int i = 0; i < n - 1; i++)
		ans *= 10;
	return(ans);
}

int main(void)
{
	int n, m;
	std::cin >> n >> m;
	std::vector<int> C(n, -1);
	for (int i = 0; i < m; i++)
	{
		int s, c;
		std::cin >> s >> c;
		if (C[s - 1] != -1 && C[s - 1] != c)
		{
			std::cout << -1 << std::endl;
			return (0);
		}
		C[s - 1] = c;
	}
	int start = pow_n(n);
	int end = pow_n(n + 1);
	int ans;
	if (n == 1)
		start = 0;
	for (int i = start; i < end; i++)
	{
		ans = i;
		std::string S = std::to_string(i);
		if (S.size() != n)
		{
			std::cout << -1 << std::endl;
			return (0);
		}
		for (int j = 0; j < n; j++)
		{
			if (C[j] != -1 && C[j] + '0' != S[j])
				ans = - 1;
		}

		if (ans != -1)
		{
			std::cout << ans << std::endl;
			return (0);
		}
	}
	std::cout << -1 << std::endl;
	return (0);
}
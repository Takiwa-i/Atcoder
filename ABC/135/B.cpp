#include <iostream>
#include <vector>
#include <algorithm>

bool check(std::vector<int> &Q)
{
	for (int i = 0; i < Q.size() - 1; i++)
	{
		if (Q[i] > Q[i + 1])
			return (false);
	}
	return (true);
}

int main(void)
{
	int n;

	std::cin >> n;
	std::vector<int> P(n);
	std::vector<int> Q;
	for (int i = 0; i < n; i++)
		std::cin >> P[i];
	if (check(P))
	{
		std::cout << "YES" << std::endl;
		return (0);
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			Q = P;
			int tmp;
			tmp = Q[i];
			Q[i] = Q[j];
			Q[j] = tmp;
			if (check(Q))
			{
				std::cout << "YES" << std::endl;
				return (0);
			}
		}
	}
	std::cout << "NO" << std::endl;
	return (0);
}
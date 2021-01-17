#include <iostream>
#include <vector>
#include <algorithm>

bool check(int bit, int m, std::vector<std::vector<int> >&S, std::vector<int> &P)
{
	for (int i = 0; i < m; i++)
	{
		int count = 0;
		for (int j = 0; j < S[i].size(); j++)
		{
			if (bit & (1 << S[i][j]))
				++count;
		}
		if (count % 2 != P[i])
			return (false);
	}
	return (true);
}

int main(void)
{
	int n, m;
	int ans = 0;
	
	std::cin >> n >> m;
	std::vector<std::vector<int> > S(m);
	std::vector<int> P(m);
	for (int i = 0; i < m; i++)
	{
		int k;
		std::cin >> k;
		std::vector<int> is(k);
		for (int j = 0; j < k; j++)
		{
			std::cin >> is[j];
			is[j]--;
		}
		S[i] = is;
	}
	for (int i = 0; i < m; i++)
		std::cin >> P[i];
	for (int bit = 0; bit < (1 << n); bit++)
	{
		if (check(bit, m, S, P))
			++ans;
	}
	std::cout << ans << std::endl;
	return (0);
}
#include <iostream>
#include <vector>
#include <algorithm>

int check(int n, std::vector<std::vector<std::pair<int, int> > > &P)
{
	int on = P.size();
	int count = 0;
	for (int i = 0; i < on; i++)
	{
		if (n & (1 << i))
		{
			for (int j = 0; j < P[i].size(); j++)
			{
				int x = P[i][j].first;
				int y = P[i][j].second;
				if (y == 1 && !(n & (1 << x)))
					return (0);
				if (y == 0 && (n & (1 << x)))
					return (0);
			}
			++count;
		}
	}
	return (count);
}

int main(void)
{
	int n;
	int ans = 0;

	std::cin >> n;
	std::vector<std::vector<std::pair<int, int> > > P(n);
	for (int i = 0; i < n; i++)
	{
		int a;
		int x, y;
		std::cin >> a;
		std::vector<std::pair<int, int> > A(a);
		for (int j = 0; j < a; j++)
		{
			std::cin >> x >> y;
			--x;
			A[j].first = x;
			A[j].second = y;
		}
		P[i] = A;
	}
	for (int i = 0; i < (1 << n); i++)
		ans = std::max(ans, check(i, P));
	std::cout << ans << std::endl;
	return (0);
}
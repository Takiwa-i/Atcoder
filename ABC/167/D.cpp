#include <iostream>
#include <vector>
#include <deque>
#include <algorithm>

int main(void)
{
	int n;
	long long k;

	std::cin >> n >> k;
	std::vector<int> A(n);
	for (int i = 0; i < n; i++)
	{
		int a;
		std::cin >> a;
		--a;
		A[i] = a;
	}
	std::vector<bool> Visit(n, false);
	std::deque<int> Q;
	int now = 0;
	while (true)
	{
		if (Visit[now])
		{
			int f = Q.front();
			while (f != now)
			{
				--k;
				Q.pop_front();
				f = Q.front();
				if (k == 0)
				{
					std::cout << f + 1 << std::endl;
					return (0);
				}
			}
			break ;
		}
		Q.push_back(now);
		Visit[now] = true;
		now = A[now];
	}
	std::cout << Q[k % Q.size()] + 1 << std::endl;
	return 0;
}
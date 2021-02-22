#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

int main(void)
{
	int n;

	std::cin >> n;
	std::vector<long long> X(n);
	std::vector<long long> Y(n);
	std::vector<long long> H(n);
	for (int i = 0; i < n; i++)
		std::cin >> X[i] >> Y[i] >> H[i];
	for (int x = 0; x <= 100; x++)
	{
		for (int y = 0; y <= 100; y++)
		{
			std::set<long long> S;
			long long hh;
			long long hmx = 1000000000000;
			for (int i = 0; i < n; i++)
			{
				if (H[i] == 0)
				{
					hmx = std::min(hmx, abs(X[i] - x) + abs(Y[i] - y));
					continue ;
				}
				hh = H[i] + abs(X[i] - x) + abs(Y[i] - y);
				S.insert(hh);
			}
			if (S.size() == 1)
			{
				long long h = *(S.begin());
				if (h <= hmx)
				{
					std::cout << x << " " << y << " " << h << std::endl;
					return (0);
				}
			}
		}
	}
	return (0);
	
}
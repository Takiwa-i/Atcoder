#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

int main(void)
{
	int n;
	std::cin >> n;
	std::vector<std::pair<long long, long long> > P(n);
	for (int i = 0; i < n; i++)
	{
		long long a, p, x;
		std::cin >> a >> p >> x;
		P.push_back(std::make_pair(p, x - a));
	}
	std::sort(P.begin(), P.end());
	for (int i = 0; i < P.size(); i++)
	{
		if (P[i].second <= 0)
			continue ;
		std::cout << P[i].first << std::endl;
		return (0);
	}
	std::cout << -1 << std::endl;
	return (0);
}
#include <iostream>
#include <vector>
#include <algorithm>

int main(void)
{
	long long n, m;
	long long ans = 0;
	long long count = 0;

	std::cin >> n >> m;
	std::vector<std::pair<long long, long long> > N;
	for (long long i = 0; i < n; i++)
	{
		long long a;
		std::cin >> a;
		N.push_back(std::make_pair(a, 1));
	}
	for (long long i = 0; i < m; i++)
	{
		long long b, c;
		std::cin >> b >> c;
		N.push_back(std::make_pair(c, b));
	}
	std::sort(N.begin(), N.end(), std::greater<std::pair<long long, long long> >());
	for (std::vector<std::pair<long long, long long> >::iterator i = N.begin(); i != N.end(); i++)
	{
		if (count + i->second <= n)
		{
			ans += (i->second) * (i->first);
			count += i->second;
		}
		else
		{
			ans += (n - count) * (i->first);
			break ;
		}
	}
	std::cout << ans << std::endl;
	return (0);
}
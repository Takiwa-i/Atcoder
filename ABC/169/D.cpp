#include <iostream>
#include <vector>
#include <algorithm>

std::vector<std::pair<long long, long long> > factorize(long long n)
{
	std::vector<std::pair <long long,long long> > res;
	for (long long i = 2; i * i <= n; i++)
	{
		if (n % i != 0)
			continue ;
		long long num = 0;
		while (n % i == 0)
		{
			++num;
			n /= i;
		}
		res.push_back(std::make_pair(i, num));
	}
	if (n != 1)
		res.push_back(std::make_pair(n, 1));
	return (res);
}

int main(void)
{
	long long n;
	long long ans = 0;
	std::vector<std::pair<long long, long long> > F;	
	std::cin >> n;
	F = factorize(n);
	for (int i = 0; i < F.size(); i++)
	{
		long long count = 1;
		long long tmp = 0;
		long long num = F[i].second;
		while (num >= count )
		{
			num -= count;
			++tmp;
			++count;
		}
		ans += tmp;
	}
	std::cout << ans << std::endl;

	return (0);
}
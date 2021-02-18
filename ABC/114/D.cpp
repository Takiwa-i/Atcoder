#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

std::vector<std::pair<long, long> > factorize(long long n)
{
	std::vector<std::pair <long,long> > res;
	for (long long i = 2; i * i <= n; i++)
	{
		if (n % i != 0)
			continue ;
		int num = 0;
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
	std::cin >> n;
	std::map<long, long> Prime;
	for (long long i = 1; i <= n; i++)
	{
		std::vector<std::pair<long, long> > F = factorize(i);
		for (int i = 0; i < F.size(); i++)
			Prime[F[i].first] += F[i].second;
	}
	for (long long i = 2; i <= n; i++)
	{
		if (Prime[(long)i] >= 74)
			++ans;
	}
	for (long long i = 2; i <= n; i++)
	{
		for (long long j = 2; j <= n; j++)
		{
			if (i != j && Prime[(long)i] >= 14 && Prime[(long)j] >= 4)
				++ans;
		}
	}
	for (long long i = 2; i <= n; i++)
	{
		for (long long j = 2; j <= n; j++)
		{
			if (i != j && Prime[(long)i] >= 24 && Prime[(long)j] >= 2)
				++ans;
		}
	}
	for(long long i = 2; i <= n; i++)
	{
		for (long long j = 2; j <= n; j++)
		{
			for (long long k = j + 1; k <= n; k++)
			if (i != j && i != k && Prime[(long)i] >= 2 && Prime[(long)j] >= 4 && Prime[(long)k] >= 4)
				++ans;
		}
	}
	std::cout << ans << std::endl;
	return (0);
}
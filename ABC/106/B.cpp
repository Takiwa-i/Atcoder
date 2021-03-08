#include <iostream>
#include <vector>

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
bool check(long long x)
{
	int count = 1;
	std::vector<std::pair <long, long> > res = factorize(x);
	for (int i = 0; i < res.size(); i++)
	{
		count *= (res[i].second + 1);
	}
	return (count == 8);
}

int main(void)
{
	long long n;
	int ans = 0;
	std::cin >> n;
	for (long long i = 1; i <= n; i++)
	{
		if (i % 2 == 0)
			continue ;
		if (check(i))
			++ans;
	}
	std::cout << ans << std::endl;
	return (0);
}
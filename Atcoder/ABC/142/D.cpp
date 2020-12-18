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

long long gcd(long long a, long long b)
{
	if (b == 0)
		return (a);
	return (gcd(b, a % b));
}

int main(void)
{
	long long a, b;
	long long g;
	std::vector<std::pair<long, long> > f;

	std::cin >> a >> b;
	g = gcd(a, b);
	f = factorize(g);
	std::cout << f.size() + 1 << std::endl;
	return (0);
}
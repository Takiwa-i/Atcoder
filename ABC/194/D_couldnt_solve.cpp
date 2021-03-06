#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>

#define DIFF 10000000

long long power(long long x, long long n)
{
	long long ans = 1;
	while (n > 0)
	{
		if (n & 1)
			ans = ans * x;
		x = x * x;
		n /= 2;
	}
	return (ans);
}

long long calc(long long n)
{
	long long i = 1;
	long double res = 0;

	while (true)
	{
		long long child = power(n - 1, i);
		long long mother = power(n, i);
		std::cout << child << std::endl;
		if (child * DIFF < mother)
			return (res);
		res +=  (long double)(child) / (long double)(mother);
	}
	return (res);
}


int main(void)
{
	long long n;

	std::cin >> n;
	std::cout << std::fixed << std::setprecision(10) << calc(n) << std::endl;
	return (0);
}

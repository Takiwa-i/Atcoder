#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

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

long long calc(long long r, long long d)
{
	r *= r;
	if (r > d)
		return (2);
	long long step = 1;
	long long count = 1;
	while (step * r < d)
	{
		++count;
		step = power(count, 2);
	}
	return (std::ceil(sqrt(step)));
}

int main(void)
{
	long long r, x, y;
	std::cin >> r >> x >> y;
	long long d = x * x + y * y;
	std::cout << calc(r, d) << std::endl;
	return (0);
}
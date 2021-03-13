#include <iostream>
#include <vector>
#include <string>
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

int main(void)
{
	long long n;
	std::cin >> n;
	long long ans = 0;
	int p = 1;
	while (n >= power(1000, p))
	{
		ans += n - power(1000, p) + 1;
		++p;
	}
	std::cout << ans << std::endl;
	return (0);
}
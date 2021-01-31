#include <iostream>
#include <cmath>
#include <algorithm>

void check(long long n2, long long x, long long &ans)
{
	long long s = n2 / x - x + 1;
	if (abs(s) % 2 == 0)
		++ans;
}


int main(void)
{
	long long n;
	long long ans = 0;
	long long n2;

	std::cin >> n;
	n2 = n * 2;
	for (long long x = 1; x * x <= n2; x++)
	{
		if (n2 % x != 0)
			continue;
		long long y = n2 / x;
		check(n2, x, ans);
		if (y != x)
		check(n2, y, ans);
	}
	std::cout << ans << std::endl;
	return (0);
}
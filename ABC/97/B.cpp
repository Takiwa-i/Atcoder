#include <iostream>
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
	int x;
	int ans = 1;

	std::cin >> x;
	for (int i = 31; i > 1; i--)
	{
		if (i > x)
			continue ;
		int n = 2;
		int a = (int)power((long long)i, (long long)n);
		while (a <= x)
		{
			ans = std::max(ans, a);
			n++;
			a = (int)power((long long)i, (long long)n);
		}
	}
	std::cout << ans << std::endl;
	return (0);
}
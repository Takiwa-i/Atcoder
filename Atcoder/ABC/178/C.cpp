#include <iostream>
#include <math.h>

# define N 1000000007

long long powmod(long long x, long long n)
{
	long long value = 1;
	for (long long i = 0; i < n; i++)
	{
		value = value * x % N;
	}
	return (value);
}

int main(void)
{
	long long n;
	long long ans;

	std::cin >> n;
	ans = (powmod(10, n) + powmod(8, n) - powmod(9, n) - powmod(9, n)) % N;
	ans = (ans + N) % N;
	std::cout << ans << std::endl;
	return (0);
}
#include <iostream>
#include <vector>
#include <algorithm>

# define M 1000000007
int main(void)
{
	long long n, k, lowest, hightest;
	long long ans = 0;
	std::cin >> n >> k;
	for (long long i = k; i <= n + 1; i++)
	{
		lowest = i * (i - 1) / 2;
		hightest = (n * 2 - i + 1) * i / 2;
		long long add = hightest - lowest + 1;
		ans = (ans + add) % M;
	}
	std::cout << ans << std::endl;
	return (0);
}
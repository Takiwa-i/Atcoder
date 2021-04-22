#include <iostream>
#include <vector>
#include <algorithm>

long long rec(long long n, std::vector<long long> &M)
{
	if (n == 0)
		return (0);
	if (M[n] != -1)
		return (M[n]);

	long long res = n;

	for (long long i = 1; i <= n; i *= 6)
	{
		res = std::min(res, rec(n - i, M) + 1);
	}
	for (long long i = 1; i <= n; i *= 9)
	{
		res = std::min(res, rec(n - i, M) + 1);
	}
	return (M[n] = res);
}


int main(void)
{
	long long n;

	std::cin >> n;
	std::vector<long long> M(110000, -1);
	std::cout << rec(n, M) << std::endl;
	return (0);
}
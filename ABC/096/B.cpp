#include <iostream>
#include <vector>
#include <algorithm>

long long calc(long long n, long long k)
{
	for (int i = 0; i < k; i++)
	{
		n *= 2;
	}
	return (n);
}


int main(void)
{
	std::vector<long long> N(3);
	long long k;

	for (int i = 0; i < 3; i++)
		std::cin >> N[i];
	std::sort(N.begin(), N.end(), std::greater<long long>());
	std::cin >> k;
	N[0] = calc(N[0], k);
	long long ans = 0;
	for (int i = 0; i < 3; i++)
		ans += N[i];
	std::cout << ans << std::endl;
	return (0);
}
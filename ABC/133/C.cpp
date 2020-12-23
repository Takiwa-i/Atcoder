#include <iostream>
#include <algorithm>

#define MOD 2019

int main(void)
{
	long long l, r, p;

	std::cin >> l >> r;
	long long dist = r - l + 1;
	if (dist > 2500)
	{
		std::cout << 0 << std::endl;
		return (0);
	}
	p = 2018;
	for (long long i = l; i < r; i++)
	{
		for (long long j = i + 1; j <= r; j++)
			p = std::min(p, (i * j) % MOD);
	}
	std::cout << p << std::endl;
	return (0);
}
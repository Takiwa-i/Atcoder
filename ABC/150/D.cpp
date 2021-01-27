#include <iostream>
#include <vector>
#include <algorithm>

long long gcd(long long a, long long b)
{
	if (b == 0)
		return (a);
	return (gcd(b, a % b));
}

long long solve(int n, long long m, std::vector<long long> &A)
{
	while (A[0] % 2 == 0)
	{
		for (int i = 0; i < n; i++)
		{
			if (A[i] % 2 != 0)
				return (0);
			A[i] /= 2;
		}
		m /= 2;
	}
	for (int i = 0; i < n; i++)
	{
		if (A[i] % 2 == 0)
			return (0);
	}

	long long lcm = 1;
	for (int i = 0; i < n; i++)
	{
		long long g = gcd(lcm, A[i]);
		lcm = lcm / g * A[i];
		if (lcm > m)
			return (0);
	}
	return ((m / lcm + 1) / 2);
}

int main(void)
{
	int n;
	long long m;

	std::cin >> n >> m;
	std::vector<long long> A(n);
	for (int i = 0; i < n; i++)
	{
		std::cin >> A[i];
		A[i] /= 2;
	}
	std::cout << solve(n, m, A) << std::endl;
	return (0);
}
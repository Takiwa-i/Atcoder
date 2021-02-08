#include <iostream>
#include <algorithm>
#include <vector>

long long gcd(long long a, long long b)
{
	if (b == 0)
		return (a);
	return (gcd(b, a % b));
}

int main(void)
{
	long long a, b;
	int k;

	std::cin >> a >> b >> k;
	long long gc = gcd(a, b);
	std::vector<long long> A;
	for (long long n = 1; n <= gc; n++)
	{
		if (a % n == 0 && b % n == 0)
			A.push_back(n);
	}
	std::sort(A.begin(), A.end(), std::greater<long long>());
	std::cout << A[k - 1] << std::endl;
	return (0);
}
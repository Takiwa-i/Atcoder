#include <iostream>
#include <vector>
#include <algorithm>

long long gcd(long long a, long long b)
{
	if (b == 0)
		return (a);
	return (gcd(b, a % b));
}

int main(void)
{
	int n;
	long long ans = 0;
	std::cin >> n;
	std::vector<long long> A(n);
	for (int i = 0; i < n; i++)
		std::cin >> A[i];
	std::vector<long long> L(n + 1, 0);
	std::vector<long long> R(n + 1, 0);
	for (int i = 0; i < n; i++)
		L[i + 1] = gcd(L[i], A[i]);
	for (int i = n - 1; i >= 0; i--)
		R[i] = gcd(R[i + 1], A[i]);
	for (int i = 0; i < n; i++)
		ans = std::max(ans, gcd(L[i], R[i + 1]));
	std::cout << ans << std::endl;
	return (0);
}
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
	long long ans;

	std::cin >> n;
	std::vector<long long> A(n);
	for (int i = 0; i < n; i++)
		std::cin >> A[i];
	std::sort(A.begin(), A.end());
	ans = A[0];
	for (int i = 0; i < n; i++)
		ans = gcd(ans, A[i]);
	std::cout << ans << std::endl;
	return (0);
	
}
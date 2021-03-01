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
	long long x;
	std::cin >> n >> x;
	std::vector<long long> X(n);
	std::vector<long long> D;
	for (int i = 0; i < n; i++)
		std::cin >> X[i];
	for (int i = 0; i < n; i++)
		D.push_back((long long)abs(X[i] - x));
	long long ans = D[0];
	for (int i = 0; i < D.size(); i++)
	{
		ans = gcd(ans, D[i]);
	}
	std::cout << ans << std::endl;
	return (0);
}
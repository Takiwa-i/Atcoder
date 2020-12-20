#include <iostream>
#include <vector>
#include <algorithm>

int main(void)
{
	int n;
	long long p = 0;
	long long ans = 0;

	std::cin >> n;
	std::vector<long long> S(n + 1, 0);
	std::vector<long long> M(n + 1, 0);
	std::vector<long long> A(n);
	for (int i = 0; i < n; i++)
		std::cin >> A[i];
	for (int i = 1; i < n + 1; i++)
		S[i] = S[i - 1] + A[i - 1];
	for (int i = 1; i < n + 1; i++)
		M[i] = std::max(M[i - 1], S[i]);
	for (int i = 0; i < n + 1; i++)
	{
		ans = std::max(ans, p + M[i]);
		p += S[i];
	}
	std::cout << ans << std::endl;
	return (0);
}
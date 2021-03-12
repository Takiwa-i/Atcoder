#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

int main(void)
{
	int n;
	long long ans = 0;

	std::cin >> n;
	std::vector<long long> A(n);
	std::vector<long long> S(n);
	for (int i = 0; i < n; i++)
		std::cin >> A[i];
	std::sort(A.begin(), A.end());
	for (int i = 0; i < n; i++)
	{
		if (i == 0)
			S[i] = A[i];
		else
			S[i] = S[i - 1] + A[i];
	}
	for (int i = 0; i < n; i++)
	{
		ans += S[n - 1] - S[i] - (n - 1- i) * A[i];
	}
	std::cout << ans << std::endl;
	return (0);
}

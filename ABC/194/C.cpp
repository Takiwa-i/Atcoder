#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

int main(void)
{
	long long n;
	std::cin >> n;
	long long ans = 0;
	std::vector<long long> A(n);
	std::vector<long long> S(n);
	std::vector<long long> DS(n);
	for (long long i = 0; i < n; i++)
	{
		std::cin >> A[i];
		if (i == 0)
		{
			S[0] = A[i];
			DS[0] = A[i] * A[i];
		}
		else
		{
			S[i] = S[i - 1] + A[i];
			DS[i] = DS[i - 1] + A[i] * A[i];
		}
	}
	for (long long i = 0; i < n; i++)
	{
		ans += (n - 1 - i) * A[i] * A[i] - 2 * A[i] * (S[n - 1] - S[i]) + DS[n - 1] - DS[i];
	}
	std::cout << ans << std::endl;
	return (0);
}

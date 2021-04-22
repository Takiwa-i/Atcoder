#include <iostream>
#include <algorithm>
#include <vector>

int main(void)
{
	int n;
	std::cin >> n;
	std::vector<long long> A(n);
	std::vector<long long> B(n);
	for (int i = 0; i < n; i++)
	{
		std::cin >> A[i];
		B[i] = A[i] - i;
	}
	std::sort(B.begin(), B.end());
	long long b = B[n / 2];
	long long ans = 0;
	for (int i = 0; i < n; i++)
	{
		ans += abs(b - B[i]);
	}
	std::cout << ans << std::endl;
	return (0);
}
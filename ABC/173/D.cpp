#include <iostream>
#include <vector>
#include <algorithm>

int main(void)
{
	long long n;
	long long ans;

	std::vector<long long> A;
	std::cin >> n;
	A.resize(n);
	for (int i = 0; i < n; i++)
		std::cin >> A[i];
	std::sort(A.begin(), A.end(), std::greater<long long>());
	ans = 0;
	for (int i = 1; i < n; i++)
		ans += A[i / 2];
	std::cout << ans << std::endl;
	return (0);
}
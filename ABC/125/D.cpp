#include <iostream>
#include <vector>
#include <algorithm>

int main(void)
{
	int n;
	int minus = 0;
	std::cin >> n;
	std::vector<long long> A(n);
	for (int i = 0; i < n; i++)
	{
		std::cin >> A[i];
		if (A[i] < 0)
		{
			++minus;
			A[i] *= -1;
		}
	}
	std::sort(A.begin(), A.end());
	if (minus % 2 != 0)
		A[0] *= -1;
	long long ans = 0;
	for (int i = 0; i < n; i++)
		ans += A[i];
	std::cout << ans << std::endl;
	return (0);
}
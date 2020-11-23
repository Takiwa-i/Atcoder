#include <iostream>
#include <vector>
#include <algorithm>

int main(void)
{
	long long k, n;
	long long dist;
	std::cin >> k >> n;
	std::vector<long long> A(n);
	for (int i = 0; i < n; i++)
		std::cin >> A[i];
	dist = k - A[n - 1] + A[0];
	for (int i = 0; i < n - 1; i++)
	{
		dist = std::max(A[i + 1] - A[i], dist);
	}
	std::cout << k - dist <<std::endl;
	return (0);
}
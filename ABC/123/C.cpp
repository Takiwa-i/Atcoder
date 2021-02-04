#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

int main(void)
{
	long long n;
	std::cin >> n;
	std::vector<long long> A(5, 0);
	for (int i = 0; i < 5; i++)
		std::cin >> A[i];
	std::sort(A.begin(), A.end());
	std::cout << 5 + (n - 1) / A[0] << std::endl;
	return (0);
}
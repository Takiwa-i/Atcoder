#include <iostream>
#include <vector>
#include <algorithm>

int main(void)
{
	int n;

	long long S = 0;
	long long SA = 0;
	std::cin >> n;
	std::vector<long long> A(n);
	std::vector<long long>R(n);
	for (int i = 0; i < n; i++)
	{
		std::cin >> A[i];
		S += A[i];
	}
	for (int i = 1; i < n; i++)
	{
		if (i % 2 == 1)
			SA += A[i];
	}
	R[0] = S - 2 * SA;
	for (int i = 1; i < n; i++)
		R[i] = 2 * A[i - 1] - R[i - 1];
	for (int i = 0; i < n; i++)
		std::cout << R[i] << " ";
	std::cout << std::endl;
	return (0);
}
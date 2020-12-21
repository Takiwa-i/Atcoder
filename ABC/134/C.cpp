#include <iostream>
#include <vector>
#include <algorithm>

int main(void)
{
	int n;
	long long m = 0;

	std::cin >> n;
	std::vector<long long> A(n);
	std::vector<long long> S(n);
	for (int i = 0; i < n; i++)
	{
		std::cin >> A[i];
		S[i] = A[i];
	}
	std::sort(S.begin(), S.end(), std::greater<long long>());
	for (int i = 0; i < n; i++)
	{
		if (A[i] == S[0])
			std::cout << S[1] << std::endl;
		else
			std::cout << S[0] << std::endl;
	}
	return (0);
}
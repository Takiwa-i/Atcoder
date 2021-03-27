#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

int main(void)
{
	int n;
	std::cin >> n;
	std::vector<long long> A(n);
	for (int i = 0; i < n; i++)
		std::cin >> A[i];
	std::vector<std::vector<long long> > T(n, std::vector<long long>(n));
	std::vector<int> D(30, 0);
	for (int i = 0; i < n; i++)
	{
		T[i][0] = A[i];
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			T[i][j - i] = (T[i][j - 1] | A[j]);
		}
	}
	return (0);
}
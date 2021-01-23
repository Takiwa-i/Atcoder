#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

int main(void)
{
	int n;
	long long ans = 0;
	std::cin >> n;
	std::vector<int> A(n);
	for (int i = 0; i < n; i++)
		std::cin >> A[i];
	std::vector<std::vector<int> > M(n, std::vector<int>(n, 0));
	for (int i = 0; i < n; i++)
	{
		int m = A[i];
		M[i][i] = m;
		for(int j = i + 1; j < n; j++)
		{
			m = std::min(m, A[j]);
			M[i][j] = m;
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)
		{
			long long p = (long long)((j - i + 1) * M[i][j]);
			ans = std::max(ans , p);
		}
	}
	std::cout << ans << std::endl;
	return (0);
}

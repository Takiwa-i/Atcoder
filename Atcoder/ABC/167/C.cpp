#include <iostream>
#include <vector>
#include <algorithm>

int main(void)
{
	unsigned long long ans = 1000000000000000;	
	unsigned long long n, m, x;
	bool flag = false;
	std::cin >> n >> m >> x;
	std::vector<unsigned long long> C(n);
	std::vector<std::vector<unsigned long long> > A(n, std::vector<unsigned long long> (m));
	for (int i = 0; i < n; i++)
	{
		std::cin >> C[i];
		for (int j = 0; j < m; j++)
			std::cin >> A[i][j];
	}
	for (int bit = 0 ; bit < (1 << n); bit++)
	{
		unsigned long long cost = 0;
		std::vector<unsigned long long> S(m, 0);
		for (int i = 0; i < n; i++)
		{
			if (bit & (1 << i))
			{
				cost += C[i];
				for (int j = 0; j < m; j++)
					S[j] += A[i][j]; 
			}
		}
		if (*(std::min_element(S.begin(), S.end())) >= x)
		{
			ans = std::min(ans, cost);
			flag = true;
		}
	}
	if (flag)
		std::cout << ans << std::endl;	
	else
		std::cout << -1 << std::endl;
	return (0);
}
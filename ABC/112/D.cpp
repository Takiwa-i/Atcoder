#include <iostream>
#include <vector>
#include <algorithm>

std::vector<long long> divisor(long long n)
{
	std::vector<long long> R;
	for (long long i = 1; i * i <= n; i++)
	{
		if (n % i == 0)
		{
			R.push_back(i);
			long long j = n / i;
			if (j != i)
				R.push_back(j);
		}
	}
	std::sort(R.begin(), R.end());
	return (R);
}

int main(void)
{
	long long n, m;
	long long ans;

	std::cin >> n >> m;
	std::vector<long long> D;
	D = divisor(m);
	ans = 1;
	for (int i = 0; i < D.size(); i++)
	{
		if (D[i] * n <= m)
			ans = std::max(ans, D[i]);
	}
	std::cout << ans << std::endl;
	return (0);
}
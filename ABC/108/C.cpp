#include <iostream>
#include <vector>

int main(void)
{
	int n, k;
	long long ans = 0;	
	std::cin >> n >> k;
	std::vector<long long> N(k, 0);
	for (int i = 1; i <= n; i++)
		N[i % k]++;
	for (int a = 0; a < k; a++)
	{
		int b = (k - a) % k;
		int c = (k - a) % k;
		if ((b + c) % k != 0)
			continue ;
		ans += N[a] * N[b] * N[c];
	}
	std::cout << ans << std::endl;
	return (0);
}
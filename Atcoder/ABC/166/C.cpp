#include <iostream>
#include <vector>
#include <algorithm>

int main(void)
{
	long long n, m, a, b;
	long long ans = 0;
	std::cin >> n >> m;
	std::vector<long long> H(n); 
	std::vector<std::vector<long long> > N(n);
	for (int i = 0; i < n; i++)
		std::cin >> H[i];
	for (int i = 0; i < m; i++)
	{
		std::cin >> a >> b;
		--a;
		--b;
		N[a].push_back(b);
		N[b].push_back(a);
	}
	for (int i = 0; i < n; i++)
	{
		++ans;
		for (std::vector<long long>::iterator j = N[i].begin(); j != N[i].end(); j++)
		{
			if (H[*j] >= H[i])
			{
				--ans;
				break;
			}
		}
	}
	std::cout << ans << std::endl;
	return (0);
}
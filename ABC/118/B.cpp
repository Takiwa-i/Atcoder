#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

int main(void)
{
	int n, m;

	std::cin >> n >> m;
	std::vector<int> M(m, 0);
	for (int i = 0; i < n; i++)
	{
		int k;
		std::cin >> k;
		for (int i = 0; i < k; i++)
		{
			int a;
			std::cin >> a;
			--a;
			M[a]++;
		}
	}
	int ans = 0;
	for (int i = 0; i < m; i++)
	{
		if (M[i] == n)
			++ans;
	}
	std::cout << ans << std::endl;
	return (0);
}
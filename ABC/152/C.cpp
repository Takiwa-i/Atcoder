#include <iostream>
#include <vector>
#include <algorithm>

int main(void)
{
	int n, p, m;
	int ans = 0;
	m = 0;
	std::cin >> n;
	std::vector<int> M(n);
	std::vector<int> P(n);
	for (int i = 0; i < n; i++)
	{
		std::cin >> P[i];
		if (m == 0)
			m = P[i];
		else
			m = std::min(m, P[i]);
		M[i] = m;
	}
	for (int i = 0; i < n; i++)
	{
		if (M[i] >= P[i])
			++ans;
	}
	std::cout << ans << std::endl;
	return (0);
}
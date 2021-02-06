#include <iostream>
#include <vector>
#include <algorithm>

int main(void)
{
	int n, m, c;
	int ans = 0;
	std::cin >> n >> m >> c;
	std::vector<int> B(m, 0);
	for (int i = 0; i < m; i++)
		std::cin >> B[i];
	for (int i = 0; i < n; i++)
	{
		int calc = 0;
		for (int j = 0; j < m; j++)
		{
			int a;
			std::cin >> a;
			calc += a * B[j];
		}
		if (calc + c > 0)
			++ans;
	}
	std::cout << ans << std::endl;
	return (0);
}
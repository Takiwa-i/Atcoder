#include <iostream>

int main(void)
{
	int n, m, a;
	int ans = 0;
	std::cin >> n >> m;	
	for (int i = 0; i < m; i++)
	{
		std::cin >> a;
		ans += a;
	}
	if (n < ans)
		std::cout << -1 << std::endl;
	else
		std::cout << n - ans << std::endl;
	return (0);
}
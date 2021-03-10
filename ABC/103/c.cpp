#include <iostream>
#include <vector>
#include <algorithm>

int main(void)
{
	int n;
	std::cin >> n;
	int ans = 0;
	for (int i = 0; i < n; i++)
	{
		int a;
		std::cin >> a;
		ans += (a - 1);
	}
	std::cout << ans << std::endl;
	return (0);
}
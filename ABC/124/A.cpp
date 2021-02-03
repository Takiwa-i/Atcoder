#include <iostream>
#include <algorithm>

int main(void)
{
	int a, b;
	int ans;

	std::cin >> a >> b;
	ans = a + a - 1;
	ans = std::max(ans, b + b - 1);
	ans = std::max(ans, a + b);
	std::cout << ans << std::endl;
	return (0);
}
#include <iostream>

int main(void)
{
	int a, b;
	int ans;

	std::cin >> a >> b;
	ans = a - 2 * b;
	if (ans < 0)
		std::cout << 0 << std::endl;
	else
		std::cout << ans << std::endl;
	return (0);
}
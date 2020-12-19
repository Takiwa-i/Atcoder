#include <iostream>

int main(void)
{
	int a, b, c;

	std::cin >> a >> b >> c;
	int ans = c - (a - b);
	if (ans < 0)
		ans = 0;
	std::cout << ans << std::endl;
	return (0);
}
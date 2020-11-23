#include <iostream>

int main(void)
{
	long long x;
	long long ans = 0;
	std::cin >> x;
	ans += (x / 500) * 1000;
	x = x - 500 * (x /500);
	ans += (x / 5) * 5;
	std::cout << ans << std::endl;
	return (0);
}
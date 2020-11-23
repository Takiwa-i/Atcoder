#include <iostream>

#define ull long long

int main(void)
{
	ull a, b, c, k, ans;

	std::cin >> a >> b >> c >> k;
	if (k <= a)
		ans = k;
	else if (k <= a + b)
		ans = a;
	else
		ans = a - (k - a - b);
	std::cout << ans << std::endl;
	return (0);
}

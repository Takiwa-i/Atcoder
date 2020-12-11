#include <iostream>

int main(void)
{
	unsigned long n, ans;

	ans = 0;
	std::cin >> n;
	for (unsigned long i = 1; i < n; i++)
		ans += i;
	std::cout << ans << std::endl;
	return (0);
}
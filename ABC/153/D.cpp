#include <iostream>

unsigned long long ans(unsigned long long n)
{
	if (n == 1)
		return (1);
	return (ans(n / 2) * 2 + 1);
}

int main(void)
{
	unsigned long long h;
	std::cin >> h;
	std::cout << ans(h) << std::endl;
	return (0);
}
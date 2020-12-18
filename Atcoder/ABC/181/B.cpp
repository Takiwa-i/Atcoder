#include <iostream>

int main(void)
{
	unsigned long n;
	unsigned long a, b;
	unsigned long ans = 0;

	std::cin >> n;
	for (int i = 0; i < n; i++)
	{
		std::cin >> a >> b;
		--a;
		ans += (b * (b + 1) - a * (a + 1)) / 2;
	}
	std::cout << ans << std::endl;
	return (0);
}
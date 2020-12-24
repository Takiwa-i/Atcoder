#include <iostream>
#include <algorithm>

int main(void)
{
	unsigned long long x, y, a, b;
	unsigned long long ans = 0;
	unsigned long long count = 0;

	std::cin >> x >> y >> a >> b;
	while (x < y)
	{
		unsigned long long temp = count + (y - x - 1) / b;
		ans = std::max(ans, temp);
		if (x >= (y + a - 1) / a)
			break ;
		x *= a;
		++count;
	}
	std::cout << ans << std::endl;
	return (0);
}
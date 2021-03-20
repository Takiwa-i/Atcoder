#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

int main(void)
{
	int a, b;
	int c, d;
	int ans = -6000;
	std::cin >> a >> b;
	std::cin >> c >> d;
	for (int x = a; x <= b; x++)
	{
		for (int y = c; y <= d; y++)
		{
			ans = std::max(ans, x - y);
		}
	}
	std::cout << ans << std::endl;
	return (0);
}

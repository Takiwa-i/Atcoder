#include <iostream>

int main(void)
{
	long long sx, sy, gx, gy;
	int ans = 3;

	std::cin >> sx >> sy >> gx >> gy;
	if (sx == gx && sy == gy)
	{
		std::cout << 0 << std::endl;
		return (0);
	}
	if (sx + sy == gx + gy || sx - sy == gx - gy || abs(sx - gx) + abs(sy - gy) <= 3)
		ans = 1;
	else
	{
		long long p = abs(gx - sx);
		long long q = abs(gy - sy);
		if ((p + q) % 2 == 0 || p + q <= 6 || abs(p - q) <= 3)
			ans = 2;
	}
	std::cout << ans << std::endl;
	return (0);
}
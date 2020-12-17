#include <iostream>
#include <iomanip>
#include <cmath>

int main(void)
{
	double sx, sy;
	double gx, gy;
	double dist;

	std::cin >> sx >> sy;
	std::cin >> gx >> gy;
	sy = fabs(sy);
	gy = fabs(gy);
	dist = fabs(gx - sx) / fabs(sy + gy) * sy;
	if (sx < gx)
		std::cout << std::fixed << std::setprecision(10) << sx + dist << std::endl;
	else
		std::cout << std::fixed << std::setprecision(10) << sx - dist << std::endl;
	return (0);
}

#include <iostream>
#include <iomanip>

int main(void)
{
	double w, h, x, y;
	int ans = 0;

	std::cin >> w >> h >> x >> y;
	if (w / 2.0 == x && h / 2.0 == y)
		ans = 1;
	std::cout << std::fixed << std::setprecision(10) << w * h / 2.0  << " " << ans << std::endl;
	return (0);
}
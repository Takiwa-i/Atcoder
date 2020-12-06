#include <iostream>
#include <iomanip>
#include <cmath>

#define pi 3.14159265359 

int main(void)
{
	double a, b, x;
	double ans;

	std::cin >> a >> b >> x;
	if (a * a * b / 2 < x)
	{
		ans = asin(a / std::sqrt((2 * b - (2 * x) / (a * a)) * (2 * b - (2 * x) / (a * a)) + a * a));
		ans *= 180 / pi;
		ans = 90.0 - ans;
	}
	else
	{
		ans = asin(b / std::sqrt(b * b + (4 * x * x) / (a * a * b * b)));
		ans *= 180 / pi;
	}
	std::cout << std::fixed << std::setprecision(10) << ans << std::endl;
	return (0);
}
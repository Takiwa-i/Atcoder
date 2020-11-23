#include <iostream>
#include <algorithm>
#include <iomanip>
#include <cmath>

int main(void)
{
	int a, b, h, m;
	double theta1, theta2, theta, ans;
	const double PI = 3.14159265358979323846;

	std::cin >> a >> b >> h >> m;
	h *= 60;
	theta1 = 0.5 * (h + m);
	theta2 = 6 * m;
	if (theta1 > theta2)
		theta = theta1 - theta2;
	else
		theta = theta2 - theta1;
	if (theta == 180)
		ans = a + b;		
	else
	{
		theta = std::min(360 - theta, theta);
		ans = std::sqrt(a * a + b * b - 2 * b * a * std::cos(theta * PI / 180.0));
	}
	std::cout << std::fixed << std::setprecision(20) <<ans << std::endl;
	return (0);
}
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
#include <iomanip>


int main(void)
{
	int n;
	std::cin >> n;
	double theta = (double) 360.0 / n;
	double x, y;
	double ox, oy;
	std::cin >> x >> y;
	std::cin >> ox >> oy;
	double mx = (x + ox) / 2.0;
	double my = (y + oy) / 2.0;
	double md = sqrt((mx - x) * (mx - x) + (my - y) * (my - y));
	std::cout << std::fixed << std::setprecision(10) << mx - md * cos(theta) << " " << my - md * sin(theta) << std::endl;
	return (0);
}
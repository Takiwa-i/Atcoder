#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
#include <iomanip>
#include <complex>

/*
int main(void)
{
	int n;
	std::cin >> n;
	double sx, si, tr, ti;
	std::cin >> sr >> si >> tr >> ti;
	std::complex<double> s(sr, si);
	std::complex<double> t(tr, ti);
	std::complex<double> o = (s + t) / 2.0;
	double pi = acos(-1);
	double theta = 2 * pi / n;
	std::complex<double> r(cos(theta), sin(theta));
	std::complex<double> ans = o + (s - o) * r;
	std::cout << std::fixed << std::setprecision(10) << ans.real() << " " << ans.imag() << std::endl;
	return (0);
}*/

int main(void)
{
	int n;
	std::cin >> n;
	double sx, sy, tx, ty;
	std::cin >> sx >> sy;
	std::cin >> tx >> ty;
	double mx = (sx + tx) / 2.0;
	double my = (sy + ty) / 2.0;
	double pi = acos(-1);
	double theta = 2 * pi / n;
	sx -= mx;
	sy -= my;
	double ax = sx * cos(theta) - sy * sin(theta);
	double ay = sx * sin(theta) + sy * cos(theta);
	ax += mx;
	ay += my;
	std::cout << std::fixed << std::setprecision(10) << ax << " " << ay << std::endl;
	return (0);
}

#include <iostream>
#include <vector>
#include <string.h>
#include <iomanip>

double rec(int a, int b, int c, std::vector<std::vector<std::vector<double> > > &dp)
{
	if (a >= 100 || b >= 100 || c >= 100)
		return (0.0);
	if (dp[a][b][c] >= 0.0)
		return (dp[a][b][c]);
	
	double res = 0;
	res += (double)(a) / (a + b + c) * (rec(a + 1, b, c, dp) + 1);
	res += (double)(b) / (a + b + c) * (rec(a, b + 1, c, dp) + 1);
	res += (double)(c) / (a + b + c) * (rec(a, b, c + 1, dp) + 1);
	return (dp[a][b][c] = res);
}
int main(void)
{
	int a, b, c;
	
	std::cin >> a >> b >> c;
	std::vector<std::vector<std::vector<double> > > dp(110, std::vector<std::vector<double> >(110, std::vector<double> (110, -1)));
	std::cout << std::fixed << std::setprecision(10) << rec(a, b, c, dp) << std::endl;
	return (0);
}
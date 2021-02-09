#include <iostream>
#include <iomanip>
#include <string>

int main(void)
{
	int n;

	std::cin >> n;
	long double ans = 0;
	for (int i = 0; i < n; i++)
	{
		long double x;
		std::string s;
		std::cin >> x >> s;
		if (s == "JPY")
			ans += x;
		else
			ans += x * 380000.0;
	}
	std::cout << std::fixed << std::setprecision(10) << ans << std::endl;
	return (0);

}
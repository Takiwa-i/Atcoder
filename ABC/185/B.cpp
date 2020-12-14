#include <iostream>
#include <vector>
#include <algorithm>

int main(void)
{
	int n, m, t;
	int now = 0;
	bool flag = true;
	int full;
	std::cin >> n >> m >> t;
	full = n;
	for (int i = 0; i < m; i++)
	{
		int a, b;
		std::cin >> a >> b;
		n = n - (a - now);
		if (n <= 0)
		{
			flag = false;
			break ;
		}
		if (n + (b - a) > full)
			n = full;
		else
			n = n + (b - a);
		now = b;
	}
	if (n - (t - now) <= 0)
		flag = false;
	if (flag)
		std::cout << "Yes" << std::endl;
	else
		std::cout << "No" << std::endl;
	return (0);
}
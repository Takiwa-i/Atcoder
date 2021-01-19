#include <iostream>
#include <algorithm>

int main(void)
{
	int n, m;
	long long lm, rm;

	std::cin >> n >> m;
	lm = 0; 
	rm = n + 1;
	for (int i = 0; i < m; i++)
	{
		long long l, r;

		std::cin >> l >> r;
		lm = std::max(lm, l);
		rm = std::min(rm, r);
	}
	if (rm - lm < 0)
		std::cout << 0 << std::endl;
	else
		std::cout << rm - lm + 1 << std::endl;
	return (0);
}
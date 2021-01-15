#include <iostream>
#include <algorithm>

int main(void)
{
	int p, q, r;

	std::cin >> p >> q >> r;
	std::cout << p + q + r - std::max(p, std::max(q, r)) << std::endl;
	return (0);
}
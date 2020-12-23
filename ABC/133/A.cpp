#include <iostream>
#include <algorithm>

int main(void)
{
	int n, a, b;

	std::cin >> n >> a >> b;
	std::cout << std::min(b, a * n) << std::endl;
	return (0);
}
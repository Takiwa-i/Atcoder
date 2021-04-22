#include <iostream>
#include <algorithm>

int main(void)
{
	int n, x;
	std::cin >> n >> x;
	int smallest = x;
	int total = 0;
	for (int i = 0; i < n; i++)
	{
		int m;
		std::cin >> m;
		smallest = std::min(smallest, m);
		total += m;
	}
	x -= total;
	std::cout << n + x / smallest << std::endl;
	return (0);
}

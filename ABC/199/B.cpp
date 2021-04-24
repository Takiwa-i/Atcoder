#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

int main(void)
{
	int n;
	int a = -10;
	int b = 2000; 
	std::cin >> n;
	for (int i = 0; i < n; i++)
	{
		int ia;
		std::cin >> ia;
		a = std::max(a, ia);
	}
	for (int i = 0; i < n; i++)
	{
		int ib;
		std::cin >> ib;
		b = std::min(b, ib);
	}
	if (b - a + 1 > 0)
		std::cout << b - a + 1 << std::endl;
	else
		std::cout << 0 << std::endl;
	return (0);
}
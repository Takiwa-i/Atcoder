#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

int main(void)
{
	int x;

	std::cin >> x;
	std::cout << 100 *(x / 100 + 1) - x << std::endl;
	return (0);
}
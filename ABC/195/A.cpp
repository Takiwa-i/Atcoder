#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

int main(void)
{
	int m, h;
	std::cin >> m >> h;
	if (h % m == 0)
		std::cout << "Yes\n";
	else
		std::cout << "No\n";
	return (0);
}
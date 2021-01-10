#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <deque>


int main(void)
{
	int x, y;

	std::cin >> x >> y;
	if (abs(x - y) < 3)
		std::cout << "Yes" << std::endl;
	else
		std::cout << "No" << std::endl;
	return (0);
}

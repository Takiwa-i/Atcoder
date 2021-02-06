#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

int main(void)
{
	int v, t, s, d;
	std::cin >> v >> t >> s >> d;
	if (v * t <= d && d <= v * s)
		std::cout << "No" << std::endl;
	else
		std::cout << "Yes" << std::endl;
	return (0);
}
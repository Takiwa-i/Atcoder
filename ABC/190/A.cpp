#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

int main(void)
{
	int a, b, c;

	std::cin >> a >> b >> c;
	if (a == b)
	{
		if (c == 0)
			std::cout << "Aoki" << std::endl;
		else
			std::cout << "Takahashi" << std::endl;
	}
	else if (a < b)
	{
		std::cout << "Aoki" << std::endl;
	}
	else
		std::cout << "Takahashi" << std::endl;
	return (0);
}
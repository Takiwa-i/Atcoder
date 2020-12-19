#include <iostream>
#include <vector>
#include <algorithm>

int main(void)
{
	int n;
	int highest, now;

	highest = 0;
	std::cin >> n;
	for (int i = 0; i < n; i++)
	{
		std::cin >> now;
		highest = std::max(highest, now);
		if (highest - now > 1)
		{
			std::cout << "No" << std::endl;
			return (0);
		}
	}
	std::cout << "Yes" << std::endl;
	return (0);
}
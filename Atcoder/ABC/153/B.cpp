#include <iostream>
#include <vector>
#include <algorithm>

int main(void)
{
	int h, n;
	int sum = 0;
	std::cin >> h >> n;
	for (int i = 0; i < n; i++)
	{
		int a;
		std::cin >> a;
		sum += a;
	}
	if (sum >= h)
		std::cout << "Yes" << std::endl;
	else
		std::cout << "No" << std::endl;
	return (0);
}
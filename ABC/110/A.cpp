#include <iostream>
#include <algorithm>
#include <vector>

int main(void)
{
	std::vector<int> V(3);
	for (int i = 0; i < 3; i++)
		std::cin >> V[i];
	std::sort(V.begin(), V.end(), std::greater<int>());
	std::cout << V[0] * 10 + V[1] + V[2] << std::endl;
	return (0);
}
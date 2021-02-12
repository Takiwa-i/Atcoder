#include <iostream>
#include <vector>
#include <algorithm>

int main(void)
{
	int n;

	std::cin >> n;
	std::vector<int> L(n);
	for (int i = 0; i < n; i++)
		std::cin >> L[i];
	std::sort(L.begin(), L.end(), std::greater<int>());
	int longest = L[0];
	int sum = 0;
	for (int i = 1; i < n; i++)
		sum += L[i];
	if (longest < sum)
		std::cout << "Yes" << std::endl;
	else
		std::cout << "No" << std::endl;
	return (0);
}
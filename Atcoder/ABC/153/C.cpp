#include <iostream>
#include <vector>
#include <algorithm>

int main(void)
{
	int n, k;
	unsigned long long sum = 0;
	std::cin >> n >> k;
	std::vector<int> h(n);
	for (int i = 0; i < n; i++)
		std::cin >> h.at(i);
	std::sort(h.begin(), h.end());
	for (int i = 0; i < n - k; i++)
		sum += h.at(i);
	std::cout << sum << std::endl;
	return (0);
}
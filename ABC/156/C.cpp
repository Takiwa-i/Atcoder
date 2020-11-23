#include <iostream>
#include <vector>
#include <algorithm>

int main(void)
{
	int n;
	unsigned long ans = 1000000000000000;
	unsigned long dist = 0;
	std::vector<int> x;
	std::cin >> n;
	x.resize(n);
	for (int i = 0; i < n; i++)
		std::cin >> x[i];
	std::sort(x.begin(), x.end());
	for (int i = 1; i <=  100; i++)
	{
		for (std::vector<int>::iterator j = x.begin(); j != x.end(); j++)
		{
			dist += (*j - i) * (*j - i);
		}
		ans = std::min(ans, dist);
		dist = 0;
	}
	std::cout << ans << std::endl;
	return (0);
}
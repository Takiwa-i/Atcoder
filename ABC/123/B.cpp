#include <iostream>
#include <vector>
#include <algorithm>

int main(void)
{
	int ans = 0;	
	std::vector<std::pair<int, int> > V(5);
	for (int i = 0; i < 5; i++)
	{
		std::cin >> V[i].second;
		V[i].first = 10 - V[i].second % 10;
		if (V[i].first == 10)
			V[i].first = 0;
	}
	std::sort(V.begin(), V.end());
	for (int i = 0; i < 5; i++)
		ans += V[i].first + V[i].second;
	ans -= V[4].first;
	std::cout << ans << std::endl;
	return (0);
}
#include <iostream>
#include <vector>
#include <algorithm>

int main(void)
{
	int n, m;
	long long cost = 0;
	
	std::cin >> n >> m;
	std::vector<std::pair<long long, long long> > AB(n);
	for (int i = 0; i < n; i++)
		std::cin >> AB[i].first >> AB[i].second;
	std::sort(AB.begin(), AB.end());
	long long count = 0;
	for (int i = 0; i < n; i++)
	{
		if (count + AB[i].second < (long long)m)
		{
			cost += AB[i].first * AB[i].second;
			count += AB[i].second;
		}
		else
		{
			while (count < (long long)m)
			{
				cost += AB[i].first;
				++count;
			}
		}
	}
	std::cout << cost << std::endl;
	return (0);
}
#include <iostream>
#include <vector> 
#include <deque>
#include <algorithm>

int main(void)
{
	int n;
	bool cmp = true;
	
	std::cin >> n;
	std::vector<std::pair<long long, long long> > AB(n);
	for (int i = 0; i < n; i++)
		std::cin >> AB[i].second >> AB[i].first;
	std::sort(AB.begin(), AB.end());
	std::deque<long long> A;
	std::deque<long long> B;
	for (int i = 0; i < n; i++)
	{
		A.push_back(AB[i].second);
		B.push_back(AB[i].first);
	}
	long long total = 0;
	long long deadline = B.front();
	while (!A.empty())
	{
		long long cost = A.front();
		if (total + cost > deadline)
		{
			cmp = false;
			break ;
		}
		total += cost;
		A.pop_front();
		if (!B.empty())
		{
			B.pop_front();
			deadline = B.front();
		}
	}
	if (cmp)
		std::cout << "Yes" << std::endl;
	else
		std::cout << "No" << std::endl;
	return (0);
}
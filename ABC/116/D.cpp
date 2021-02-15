#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <set>


int main(void)
{
	int n;
	int k;
	long long kinds = 0;
	long long ans = 0;
	std::cin >> n >> k;
	std::vector<std::pair<long long, long long> > S;
	std::vector<std::vector<long long> > V(n + 1);
	std::set<long long> Used;
	std::priority_queue<long long, std::vector<long long>, std::greater<long long> > used_min_q;
	std::priority_queue<long long, std::vector<long long> > non_used_max_q;
	for (int i = 0; i < n; i++)
	{
		long long t, d;
		std::cin >> t >> d;
		t--;
		S.push_back(std::make_pair(d, t));
	}
	std::sort(S.begin(), S.end(), std::greater<std::pair<long long, long long> >());
	for (int i = 0; i < S.size(); i++)
		V[S[i].second].push_back(S[i].first);
	for (int i = 0; i < n; i++)
	{
		std::sort(V[i].begin(), V[i].end(), std::greater<long long>());
		if (V[i].size() > 0)
			++kinds;
	}
	long long pre = 0;
	for (int i = 0; i < k; i++)
	{
		pre += S[i].first;
		if (Used.find(S[i].second) != Used.end())
			used_min_q.push(S[i].first);
		Used.insert(S[i].second);
	}
	for (int i = 0; i < n; i++)
	{
		if (Used.find(i) == Used.end() && V[i].size() > 0)
			non_used_max_q.push(V[i][0]);
	}
	ans = pre + (long long)Used.size() * (long long)Used.size();
	long long count = (long long)Used.size();
	kinds = std::min(kinds, count + (long long)used_min_q.size());
	while (count < kinds)
	{
		long long min_n = used_min_q.top();
		used_min_q.pop();
		long long max_n = non_used_max_q.top();
		non_used_max_q.pop();
		pre -= min_n;
		pre += max_n;
		++count;
		ans = std::max(ans, pre + count * count);
	}
	std::cout << ans << std::endl;
	return (0);
}
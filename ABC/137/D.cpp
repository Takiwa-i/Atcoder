#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

#define M 100001

int main(void)
{
	int n, m;
	long long ans = 0;

	std::cin >> n >> m;
	std::vector<std::vector<long long> > B(M);
	std::priority_queue<long long> Q;
	for (int i = 0; i < n; i++)
	{
		long long a, b;
		std::cin >> a >> b;
		B[a].push_back(b);
	}
	for (int i = 1; i <= m; i++)
	{
		for (int a = 0; a < B[i].size(); a++)
		{
			Q.push(B[i][a]);
		}
		if (!(Q.empty()))
		{
			ans += Q.top();
			Q.pop();
		}
	}
	std::cout << ans << std::endl;
	return (0);
}
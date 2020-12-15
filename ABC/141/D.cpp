#include <iostream>
#include <queue>
#include <algorithm>

int main(void)
{
	int n, m;
	long long ans = 0;
	std::priority_queue<long long> A;
	
	std::cin >> n >> m;
	for(int i = 0; i < n; i++)
	{
		long long a;
		std::cin >> a;
		A.push(a);
	}
	for (int i = 0; i < m; i++)
	{
		long long big = A.top();
		A.pop();
		A.push(big / 2);
	}
	while (!(A.empty()))
	{
		ans += A.top();
		A.pop();
	}
	
	std::cout << ans << std::endl;
	return (0);
}
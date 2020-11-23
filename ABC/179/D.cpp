#include <iostream>
#include <vector>


void dfs(std::vector<int>& S, int n, int sum, int& ans)
{
	if (sum == n)
	{	
		++ans;
		return ;
	}
	if (sum > n)
		return ;
	for (int i = 0; i < S.size(); i++)
		dfs(S, n, sum + S[i], ans);
}

int main(void)
{
	int n;
	int k;
	int l, r;
	int ans = 0;
	std::vector<int> S;

	std::cin >> n >> k;
	for (int i = 0; i < k; i++)
	{
		std::cin >> l >> r;
		for (int j = l; j <= r; j++)
			S.push_back(j);
	}
	dfs(S, n, 1, ans);
	std::cout << ans % 998244353 << '\n';
	return (0);
}
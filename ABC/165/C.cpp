#include <iostream>
#include <vector>
#include <algorithm>

void dfs(int x, int n, int m, int q, std::vector<int>& cmb, std::vector<int>& a, std::vector<int>& b, std::vector<int>& c, std::vector<int>& d, long long& ans)
{
	if (cmb.size() == n)
	{
		long long result = 0;
		for (int i = 0; i < q; i++)
		{
			if (cmb[b[i] - 1] - cmb[a[i] - 1] == c[i])
				result += d[i];
		}
		ans = std::max(ans, result);
		return ;
	}
	for (int i = x; i <= m; i++)
	{
		std::vector<int> cp = cmb;
		cp.push_back(i);
		dfs(i, n, m, q, cp, a, b, c, d, ans);
	}
}


int main(void)
{
	int n, m, q;
	long long ans = 0;
	std::cin >> n >> m >> q;
	std::vector<int> a(q);
	std::vector<int> b(q); 
	std::vector<int> c(q);
	std::vector<int> d(q);
	std::vector<int> cmb;	
	for (int i = 0; i < q; i++)
	{
		std::cin >> a[i] >> b[i] >> c[i] >> d[i];
	}
	dfs(1, n, m, q, cmb, a, b, c, d, ans);	
	std::cout << ans << std::endl;
	return (0);
}
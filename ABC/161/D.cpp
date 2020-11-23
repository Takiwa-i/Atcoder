#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

void dfs(int d, long long val, std::vector<long long>& V)
{
	V.push_back(val);
	if (d == 10)
		return ;
	for (int i = -1; i <= 1; i++)
	{
		int add = (val % 10) + i;
		if (add >= 0 && add <= 9)
			dfs(d + 1, val * 10 + add, V);
	}
}

int main(void)
{
	int k;
	std::cin >> k;
	std::vector<long long> V;
	for (int i = 1; i < 10; i++)
		dfs(1, i, V);
	std::sort(V.begin(), V.end());
	std::cout << V[k - 1] << std::endl;	
	return (0);
}
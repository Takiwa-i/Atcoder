#include <iostream>
#include <vector>
#include <algorithm>
#define INF 1000000000

int dfs(std::vector<int> &L, int i, int a, int b, int c, int A, int B, int C)
{
	if (i == L.size())
	{
		if (a * b * c == 0)
			return (INF);
		return (abs(a - A) + abs(b - B) + abs(c - C));
	}

	int res = dfs(L, i + 1, a, b, c, A, B, C);
	
	res = std::min(res, dfs(L, i + 1, a + L[i], b, c, A, B, C) + (a ? 10 : 0));
	res = std::min(res, dfs(L, i + 1, a, b + L[i], c, A, B, C) + (b ? 10 : 0));
	res = std::min(res, dfs(L, i + 1, a, b, c + L[i], A, B, C) + (c ? 10 : 0));
	return (res);
}


int main(void)
{
	int n, a, b, c;

	std::cin >> n >> a >> b >> c;
	std::vector<int> L(n);
	for (int i = 0; i < n; i++)
		std::cin >> L[i];
	std::cout << dfs(L, 0, 0, 0, 0, a, b, c) << std::endl;
	return (0);
}
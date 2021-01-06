#include <iostream>
#include <vector>
#include <queue>

int main(void)
{
	int n, m;

	std::cin >> n >> m;
	std::vector<std::vector<int> > T(n);
	std::vector<int> C(n, -1);
	std::vector<int> M(n, -1);
	std::queue<int> Q;	
	for (int i = 0; i < m; i++)
	{
		int a, b;
		std::cin >> a >> b;
		--a;
		--b;
		T[a].push_back(b);
		T[b].push_back(a);
	}
	C[0] = 0;
	Q.push(0);
	while (!(Q.empty()))
	{
		int now = Q.front();
		Q.pop();
		for (int i = 0; i < T[now].size(); i++)
		{
			int next = T[now][i];
			if (C[next] == -1 )
			{
				C[next] = C[now] + 1;
				M[next] =  now;
				Q.push(next);
			}
		}
	}
	std::cout << "Yes" << std::endl;
	for (int i = 1; i < n; i++)
		std::cout << M[i] + 1 << std::endl;
	return (0);
}
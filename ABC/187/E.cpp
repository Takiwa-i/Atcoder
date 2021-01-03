#include <iostream>
#include <vector>
#include <algorithm>

void dfs_calc(std::vector<int64_t> &C, std::vector<std::vector<int> > &T, std::vector<long long> &D, std::vector<int> & Depth, int now, int prev)
{
	C[now] += D[now] + prev;
	for (int i = 0; i < T[now].size(); i++)
	{
		if (Depth[now] < Depth[T[now][i]])
		{
			dfs_calc(C, T, D, Depth, T[now][i], C[now]);
		}
	}
}

void dfs_depth(std::vector<int> &D, std::vector<std::vector<int> > &T, int d, int now)
{
	D[now] = d;
	for (int i = 0; i < T[now].size(); i++)
	{
		if (D[T[now][i]] == -1)
		{
			dfs_depth(D, T, d + 1, T[now][i]);
		}
	}
}

int main(void)
{
	int n;
	std::cin >> n;
	std::vector<std::vector<int> > Tree(n); 
	std::vector<int> A(n - 1);
	std::vector<int> B(n - 1);
	for (int i = 0; i < n - 1; i++)
	{
		int a, b;
		std::cin >> a >> b;
		a--;
		b--;
		A[i] = a;
		B[i] = b;
		Tree[a].push_back(b);
		Tree[b].push_back(a);
	}
	std::vector<int> Depth(n , -1);
	dfs_depth(Depth, Tree, 1, 0);
	std::vector<long long> Diff(n, 0);
	int q;
	std::cin >> q;
	for (int i = 0; i < q; i++)
	{
		long long t, e, x;
		std::cin >> t >> e >> x;
		e--;
		int start = A[e];
		int block = B[e];
		if (t == 2)
			std::swap(start, block);
		if (Depth[start] < Depth[block])
		{
			Diff[0] += x;
			Diff[block] -= x;
		}
		else
			Diff[start] += x;
	}
	std::vector<int64_t> C(n, 0);
	dfs_calc(C, Tree, Diff, Depth, 0, 0);
	for (int i = 0; i < n; i++)
	{
		std::cout << C[i] << std::endl;
	}
	return (0);
}
#include <iostream>
#include <vector>
#include <algorithm>

#define INF (1LL<<60)

long long solve(std::vector<long long> &P, std::vector<long long> &C, long long k)
{
	long long res = -INF;

	std::vector<bool> Visit(P.size(), false);
	std::vector<std::vector<long long> > Circles;
	for (int i = 0; i < P.size(); i++)
	{
		if (Visit[i])
			continue ;
		int current = i;
		std::vector<long long> Connect;
		while (!Visit[current])
		{
			Visit[current] = true;
			Connect.push_back(C[current]);
			current = P[current];
		}
		Circles.push_back(Connect);
	}
	for (std::vector<std::vector<long long> >::iterator vec = Circles.begin(); vec != Circles.end(); vec++)
	{
		long long circle_size = (*vec).size();
		std::vector<long long> Sum(circle_size * 2 + 1, 0);
		for (long long i = 0; i < circle_size * 2; i++)
			Sum[i + 1] = Sum[i] + (*vec)[i % circle_size];
		std::vector<long long> Step(circle_size, -INF);
		for (long long i = 0; i < circle_size; i++)
		{
			for (long long j = 0; j < circle_size; j++)
			{
				long long pre = std::max(Step[j], Sum[i + j] - Sum[i]);
				Step[j] = pre;
			}
		}
		for (long long r = 0; r < circle_size; r++)
		{
			if (r > k)
				continue ;
			long long q = (k - r) / circle_size;
			if (r == 0 && q == 0)
				continue ;
			if (Sum[circle_size] > 0)
				res = std::max(res, Step[r] + Sum[circle_size] * q);
			else if (r > 0)
				res = std::max(res, Step[r]);
		}
	}
	return (res);
}


int main(void)
{
	int n;
	long long k;
	std::cin >> n >> k;
	std::vector<long long> P(n);
	std::vector<long long> C(n);
	for (int i = 0; i < n; i++)
	{
		std::cin >> P[i];
		P[i]--;
	}
	for (int i = 0; i < n; i++)
		std::cin >> C[i];
	std::cout << solve(P, C, k) << std::endl;
	return (0);
}
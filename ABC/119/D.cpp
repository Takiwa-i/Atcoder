#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

const long long INF = 1LL<<58;

void chmin(long long &ans, long long p)
{
	if (ans > p)
		ans = p;
}

long long calc(std::vector<long long> &S, std::vector<long long> &T, long long start)
{
	long long ans = INF;
	for (int i = 0; i < 2; i++)
	{
		long long first;
		if (i == 1)
			first = S[std::upper_bound(S.begin(), S.end(), start) - S.begin() - 1];
		else
			first = S[std::lower_bound(S.begin(), S.end(), start) - S.begin()];
		for (int j = 0; j < 2; j++)
		{
			long long second;
			if (j == 1)
				second = T[std::upper_bound(T.begin(), T.end(), first) - T.begin() - 1];
			else
				second = T[std::lower_bound(T.begin(), T.end(), first) - T.begin()];
			chmin(ans, abs(start - first) + abs(first - second));
		}
	}
	for (int i = 0; i < 2; i++)
	{
		long long first;
		if (i == 1)
			first = T[std::upper_bound(T.begin(), T.end(), start) - T.begin() - 1];
		else
			first = T[std::lower_bound(T.begin(), T.end(), start) - T.begin()];
		for (int j = 0; j < 2; j++)
		{
			long long second;
			if (j == 1)
				second = S[std::upper_bound(S.begin(), S.end(), first) - S.begin() - 1];
			else
				second = S[std::lower_bound(S.begin(), S.end(), first) - S.begin()];
			chmin(ans, abs(start - first) + abs(first - second));
		}
	}
	return (ans);
}


int main(void)
{
	long long a, b, q;
	std::cin >> a >> b >> q;
	std::vector<long long> S(a);
	std::vector<long long> T(b);
	std::vector<long long> X(q);
	for (int i = 0; i < a; i++)
		std::cin >> S[i];
	for (int i = 0; i < b; i++)
		std::cin >> T[i];
	for (int i = 0; i < q; i++)
		std::cin >> X[i];
	S.push_back(-INF);
	T.push_back(-INF);
	S.push_back(INF);
	T.push_back(INF);
	std::sort(S.begin(), S.end());
	std::sort(T.begin(), T.end());
	for (int i = 0; i < q; i++)
		std::cout << calc(S, T, X[i]) << std::endl;
	return (0);
}
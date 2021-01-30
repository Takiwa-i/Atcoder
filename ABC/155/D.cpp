#include <iostream>
#include <vector>
#include <algorithm>

#define INF (1LL<<61)


long long solve(std::vector<long long> &A, long long k)
{
	std::sort(A.begin(), A.end());
	long long left = -INF;
	long long right = INF;
	while (right - left > 1)
	{
		long long x = (left + right) / 2;
		long long under_x = 0;
		long long no_count = 0;
		for (int i = 0; i < A.size(); i++)
		{
			if (A[i] > 0)
			{
				int left2 = -1;
				int right2 = A.size();
				while (right2 - left2 > 1)
				{
					int middle = (left2 + right2) / 2;
					if (A[i] * A[middle] <= x)
						left2 = middle;
					else
						right2 = middle;
				}
				under_x += right2;
			}
			else if (A[i] < 0)
			{
				int left2 = -1;
				int right2 = A.size();
				while (right2 - left2 > 1)
				{
					int middle = (left2 + right2) / 2;
					if (A[i] * A[middle] <= x)
						right2 = middle;
					else
						left2 = middle;
				}
				under_x += A.size() - right2;
			}
			else if (x >= 0)
				under_x += A.size();
			if (A[i] * A[i] <= x)
				++no_count;
		}
		long long num = (under_x - no_count) / 2;
		if (num >= k)
			right = x;
		else
			left = x;
	}
	return (right);
}


int main(void)
{
	long long n, k;

	std::cin >> n >> k;
	std::vector<long long> A(n);
	for (int i = 0; i < n; i++)
		std::cin >> A[i];
	std::cout << solve(A, k) << std::endl;
	return (0);
}
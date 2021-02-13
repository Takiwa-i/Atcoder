#include <iostream>
#include <vector>
#include <algorithm>

int main(void)
{
	int n;
	long long k;

	std::cin >> n >> k;
	std::vector<long long> A(n);
	for (int i = 0; i < n; i++)
		std::cin >> A[i];
	long long ans = 0;
	for (int i = -1; i < 41; i++)
	{
		if (i != -1 && !(k &(1LL << i)))
			continue;
		long long pre = 0;
		for (int j = 0; j < 41; j++)
		{
			int count_bit = 0;
			for (int l = 0; l < n; l++)
			{
				if (A[l] & (1LL << j))
					++count_bit;
			}
			if (j > i)
			{
				if (k & (1LL << j))
					pre += (1LL << j) * (n - count_bit);
				else
					pre += (1LL << j) * count_bit;
			}
			else if (i == j)
				pre += (1LL << j) * count_bit; 
			else
				pre += (1LL << j) * std::max(count_bit, n - count_bit);
		}
		ans = std::max(ans, pre);
	}
	std::cout << ans << std::endl;
	return (0);
}
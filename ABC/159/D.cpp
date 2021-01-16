#include <iostream>
#include <vector>
#include <algorithm>


int main(void)
{
	int n;
	long long total = 0;

	std::cin >> n;
	std::vector<long long> Count(200001, 0);
	std::vector<long long> Choice(200001, 0);
	std::vector<long long> A(n);
	std::vector<bool> Done(200001, false);
	for (int i = 0; i < n; i++)
	{
		std::cin >> A[i];
		Count[A[i]]++;
	}
	for (int i = 0; i < n; i++)
	{
		if (Count[A[i]] >= 2)
		{
			Choice[A[i]] = (Count[A[i]] * (Count[A[i]] - 1)) / 2;
			if (Done[A[i]] == false)
			{
				Done[A[i]] = true;
				total += Choice[A[i]];
			}
		}
	}
	for (int i = 0; i < n; i++)
	{
		if (Count[A[i]] - 1 >= 2)
			std::cout << total - Choice[A[i]] + ((Count[A[i]] - 1) * (Count[A[i]] - 2) / 2) << std::endl;
		else
			std::cout << total - Choice[A[i]] << std::endl;
	}
	return (0);
}
#include <iostream>
#include <vector>
#include <algorithm>

int main(void)
{
	int n;
	long long dist = 0;
	long long k;
	int city = 1;
	int ans = 0;

	std::cin >> n;
	std::cin >> k;
	std::vector<std::vector<long long> > T(n);
	std::vector<int> C(n - 1);
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			long long t;
			std::cin >> t;
			T[i].push_back(t);
		}
	}
	for (int i = 0; i < n - 1; i++)
	{
		C[i] = city;
		city++;
	}
	do
	{
		dist = 0;
		dist += T[0][C[0]];
		for (int i = 0; i < n - 2; i++)
			dist += T[C[i]][C[i + 1]];
		dist += T[C[n - 2]][0];
		if (dist == k)
			++ans;
	} while (std::next_permutation(C.begin(), C.end()));
	std::cout << ans << std::endl;
	return (0);
}
#include <iostream>
#include <vector>
#include <algorithm>

#define MAX 200001

int main(void)
{
	long long n, w;
	long long s, t, p;
	std::vector<long long> V(MAX, 0);
	std::cin >> n >> w;
	for (long long i = 0; i < n; i++)
	{
		std::cin >> s >> t >> p;
		V[s] += p;
		V[t] -= p;
	}
	for (int i = 0; i < MAX; i++)
	{
		V[i + 1] += V[i];
		if (V[i] > w)
		{
			std::cout << "No" << std::endl;
			return (0);
		}
	}
	std::cout << "Yes" << std::endl;
	return (0);
}
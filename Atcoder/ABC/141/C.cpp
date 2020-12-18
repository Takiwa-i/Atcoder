#include <iostream>
#include <vector>
#include <algorithm>

int main(void)
{
	int n, k, q;

	std::cin >> n >> k >> q;
	std::vector<int> N(n, k - q);
	for (int i = 0; i < q; i++)
	{
		int a;
		std::cin >> a;
		a--;
		N[a]++;
	}
	for (int i = 0; i < n; i++)
	{
		if (N[i] > 0)
			std::cout << "Yes" << std::endl;
		else
			std::cout << "No" << std::endl;
	}
	return (0);
}
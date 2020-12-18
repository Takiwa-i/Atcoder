#include <iostream>
#include <vector>

int main(void)
{
	int k;

	std::vector<int> A(1000000);
	std::cin >> k;
	A[0] = 7 % k;
	for (int i = 1; i <= k; i++)
	{
		if (A[i - 1] % k == 0)
		{
			std::cout << i << std::endl;
			return (0);
		}
		A[i] = (10 * A[i - 1] + 7) % k; 
	}
	std::cout << -1 << std::endl;
	return (0);
}

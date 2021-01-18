#include <iostream>
#include <vector>
#include <algorithm>

int main(void)
{
	int n;

	std::cin >> n;
	std::vector<int> A(n + 1, 0);
	std::vector<int> R(n + 1, 0);
	for (int i = 1; i <= n; i++)
		std::cin >> A[i];
	for (int i = n; i > 0; i--)
	{
		if (i > n / 2)
			R[i] = A[i];
		else
		{
			int sum = 0;
			for (int j = 2 * i; j <= n; j += i)
				sum += R[j];
			if (sum % 2 != A[i])
				R[i] += 1;
		}
	}
	int ans = 0;
	for (int i = 1; i <= n; i++)
		ans += R[i];
	std::cout << ans << std::endl;
	for (int i = 1; i <= n; i++)
	{
		if (R[i] == 1)
			std::cout << i << " ";
	}
	std::cout << std::endl;
	return (0);
}
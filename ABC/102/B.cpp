#include <iostream>
#include <vector>
#include <algorithm>

int main(void)
{
	int n;
	std::cin >> n;
	std::vector<int> A(n);
	for (int i = 0; i < n; i++)
		std::cin >> A[i];
	int ans = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			ans = std::max(ans, abs(A[i] - A[j]));
		}
	}
	std::cout << ans << std::endl;
	return (0);
}
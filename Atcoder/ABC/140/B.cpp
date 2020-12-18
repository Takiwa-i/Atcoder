#include <iostream>
#include <vector>
#include <algorithm>

int main(void)
{
	int n;
	int ans = 0;

	std::cin >> n;
	std::vector<int> A(n);
	std::vector<int> B(n);
	std::vector<int> C(n - 1);
	for (int i = 0; i < n; i++)
		std::cin >> A[i];
	for (int i = 0; i < n; i++)
		std::cin >> B[i];
	for (int i = 0; i < n - 1; i++)
		std::cin >> C[i];
	for (int i = 0; i < n; i++)
		ans += B[A[i] - 1];
	for (int i = 0; i < n - 1; i++)
	{
		if (A[i + 1] - A[i] == 1)
			ans += C[A[i] - 1];
	}
	std::cout << ans << std::endl;
	return (0);
}
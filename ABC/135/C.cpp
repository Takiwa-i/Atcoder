#include <iostream>
#include <vector>
#include <algorithm>

int main(void)
{
	int n;
	long long ans = 0;

	std::cin >> n;
	std::vector<long long> A(n + 1);
	std::vector<long long> B(n);
	for (int i = 0; i < n + 1; i++)
		std::cin >> A[i];
	for (int i = 0; i < n; i++)
		std::cin >> B[i];
	for (int i = 0; i < n; i++)
	{
		long long enemy = std::min(A[i], B[i]);
		ans += enemy;
		A[i] -= enemy;
		B[i] -= enemy;
		long long next_enemy = std::min(A[i + 1], B[i]);
		ans += next_enemy;
		A[i + 1] -= next_enemy;
		B[i] -= next_enemy;
	}
	std::cout << ans << std::endl;
	return (0);
}
#include <iostream>
#include <vector>

int main(void)
{
	int n, k;
	int ans = 1000000000;
	std::cin >> n >> k;
	std::vector<int> X(n);
	for (int i = 0; i < n; i++)
		std::cin >> X[i];
	for (int i = 0; i + k - 1 < n; i++)
	{
		int l = i;
		int r = i + k - 1;
		int dl = abs(X[l]) + abs(X[r] - X[l]);
		int dr = abs(X[r]) + abs(X[l] - X[r]);
		ans = std::min(ans, std::min(dl, dr));
	}
	std::cout << ans << std::endl;
	return (0);
}
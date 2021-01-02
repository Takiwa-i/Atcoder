#include <iostream>
#include <vector>
#include <algorithm>

int main(void)
{
	long long n;
	long long sa = 0;
	long long taka = 0;
	long long ans = 0;
	std::cin >> n;
	std::vector<long long> T(n);
	for (int i = 0; i < n; i++)
	{
		long long a, b;
		std::cin >> a >> b;
		sa += a;
		T[i] = 2 * a + b;
	}
	std::sort(T.begin(), T.end(), std::greater<long long>());
	for (int i = 0; i < n; i++)
	{
		if (sa < taka)
			break ;
		taka += T[i];
		++ans;
	}
	std::cout << ans << std::endl;
	return (0);
}
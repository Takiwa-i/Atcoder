#include <iostream>
#include <vector>
#include <algorithm>

#define ull unsigned long long

int main(void)
{
	ull n;
	ull ans;
	bool prime;

	prime = true;
	std::cin >> n;
	ans = n;
	for (ull i = 2; i * i <= n; i++)
	{
		if (n % i == 0 && n != 2)
		{
			prime = false;
			ans = std::min(ans, (i - 1 + (n / i) - 1));
		}
	}
	if (prime)
		ans = n - 1;
	std::cout << ans << std::endl;
	return (0);
}

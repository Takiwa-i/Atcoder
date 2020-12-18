#include <iostream>

int main(void)
{
	long long n;
	long long ans = 0;
	std::cin >> n;
	for (long long i = 1; i <= n; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			continue;
		else if (i % 3 == 0)
			continue;
		else if (i % 5 == 0)
			continue;
		else
			ans += i;
	}
	std::cout << ans << std::endl;
	return (0);
}
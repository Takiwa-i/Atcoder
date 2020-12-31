#include <iostream>

long long solve(long long n)
{
	long long ans = 0;
	for (int k = 1; k <= n; k++)
	{
		long long g = n / k;
		ans += (g * (g + 1) / 2) * k; 
	}
	return (ans);
}

int main(void)
{
	long long n; 

	std::cin >> n;
	std::cout << solve(n) << std::endl;
	return (0);
}
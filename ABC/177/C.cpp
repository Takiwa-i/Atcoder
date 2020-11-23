#include <iostream>
#include <algorithm>
#include <vector>

#define MOD 1000000007

int main(void)
{
	int n;

	std::cin >> n;
	std::vector<int> A(n);
	long long sum = 0;
	long long ans = 0;
	for (int i = 0; i < n; i++)
	{
		std::cin >> A[i];
		sum +=  A[i];
		sum %= MOD;
	}
	for (int i = 0; i < n; i++)
	{
		sum -= A[i];
		if (sum < 0)
			sum += MOD;
		ans += sum * A[i];
		ans %= MOD;
	}
	
	
	std::cout << ans << std::endl;
	return (0);
}
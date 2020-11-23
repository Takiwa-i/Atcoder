#include <iostream>
#include <vector>
#include <algorithm>

#define ull unsigned long long 
#define mm 1000000000000000000

int main(void)
{
	int n;
	ull a, ans;

	ans = 1;
	std::cin >> n;
	std::vector<ull> A(n);
	for (int i = 0; i < n; i++)
		std::cin >> A[i];
	std::sort(A.begin(), A.end());
	for (int i = 0; i < n; i++)
	{
		if (A[i] == 0)
		{
			std::cout << 0 << std::endl;
			return (0);
		}
		if (ans > mm / A[i])
		{	
			std::cout << -1 << std::endl;
			return (0);
		}
		ans *= A[i];
	}
	std::cout << ans << std::endl;
	return (0);
}
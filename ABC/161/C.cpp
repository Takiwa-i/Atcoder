#include <iostream>
#include <vector>
#include <algorithm>

#define ull unsigned long long

int main(void)
{
	ull n, k, ans;
	std::cin >> n >> k;
	std::cout << std::min(n % k, k - n % k) << std::endl;
	return (0);
}
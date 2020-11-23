#include <iostream>
#include <algorithm>

#define ull unsigned long long

int main(void)
{
	ull n, a, b, ans;
	std::cin >> n >> a >> b;
	ans = std::min(a, n % (a + b));	
	std::cout << a * (n / (a + b)) + ans << std::endl;
	return (0);
}

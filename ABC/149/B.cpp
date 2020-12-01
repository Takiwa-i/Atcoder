#include <iostream>

#define ull unsigned long long

int main(void)
{
	ull a, b, k;

	std::cin >> a >> b >> k;
	if (a > k)
		std::cout << a - k << " " << b << std::endl;
	else
	{
		if (b + a < k)
			std::cout << 0 << " " << 0 << std::endl;
		else
			std::cout << 0 << " " << b - k + a << std::endl;
	}
	
	return (0);
}
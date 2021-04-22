#include <iostream>

int main(void)
{
	int a, b;
	int ans = 0;

	std::cin >> a >> b;
	ans = a;
	if (b < a)
		--ans;
	std::cout << ans << std::endl;
	return (0);
}
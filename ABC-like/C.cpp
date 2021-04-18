#include <iostream>
#include <algorithm>

bool check(int p, int a, int b)
{
	int under = (a - 1) / p;
	int top = b / p;
	if (top - under >= 2) 
		return (true);
	return (false);
}

int main(void)
{
	int a, b;
	int ans = 0;
	std::cin >> a >> b;
	for (int p = 1; p <= b; p++)
	{
		if (check(p, a, b))
			ans = std::max(ans, p);
	}
	std::cout << ans << std::endl;
	return (0);
}
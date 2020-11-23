#include <iostream>

long long gcb_two(int x, int y)
{
	if (y == 0)
		return (x);
	return gcb_two(y, x % y);
}

long long gcb(int a, int b, int c)
{
	return gcb_two(gcb_two(a, b), c);
}

int main(void)
{
	int k;
	long long ans = 0;
	std::cin >> k;
	for (int a = 1; a <= k; a++)
	{
		for (int b = 1; b <= k; b++)
		{
			for (int c = 1; c <= k; c++)
			{
				ans += gcb(a, b, c);
			}
		}
	}
	std::cout << ans << std::endl;
	return (0);
}
#include <iostream>

int main(void)
{
	long long n, d;
	int ans = 0;
	long long x, y;

	std::cin >> n >> d;
	d = d * d;
	for (int i = 0; i < n; i++)
	{
		std::cin >> x >> y;
		if ( x * x + y * y <= d)
			++ans;
	}
	std::cout << ans << std::endl;
	return (0);
}
#include <iostream>

int main(void)
{
	int n, x;
	int d = 0;
	int ans = 1;
	std::cin >> n >> x;
	for (int i = 0; i < n; i++)
	{
		int l;
		std::cin >> l;
		d += l;
		if (d <= x)
			++ans;
	}
	std::cout << ans << std::endl;
	return (0);
}
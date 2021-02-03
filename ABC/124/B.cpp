#include <iostream>
#include <algorithm>

int main(void)
{
	int n;
	int higest = 0;
	int ans = 0;
	std::cin >> n;
	for (int i = 0; i < n; i++)
	{
		int h;
		std::cin >> h;
		if (h >= higest)
			++ans;
		higest = std::max(higest, h);
	}
	std::cout << ans << std::endl;
	return (0);
}
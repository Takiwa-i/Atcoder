#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

int main(void)
{
	int n;
	int ans = (1 << 30);
	std::cin >> n;
	std::vector<int> A(n);
	for (int i = 0; i < n; i++)
		std::cin >> A[i];
	for (int bit = 0; bit < (1 << (n - 1)); bit++)	
	{
		int now = 0;
		int o = 0;
		for (int i = 0; i < n; i++)
		{
			o |= A[i];
			if (bit & (1 << i))
			{
				now ^= o;
				o = 0;
			}
		}
		now ^= o;
		ans = std::min(ans, now);
	}
	std::cout << ans << std::endl;
	return (0);
}
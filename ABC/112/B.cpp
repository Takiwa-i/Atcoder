#include <iostream>
#include <algorithm>

int main(void)
{
	int N, T;
	int ans = 2000;

	std::cin >> N >> T;
	for (int i = 0; i < N; i++)
	{
		int c, t;
		std::cin >> c >> t;
		if (t <= T)
			ans = std::min(ans, c);
	}
	if (ans == 2000)
		std::cout << "TLE" << std::endl;
	else
		std::cout << ans << std::endl;
	return (0);
}
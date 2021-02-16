#include <iostream>
#include <algorithm>

int main(void)
{
	int n;
	int s = 0;
	int mx = 0;

	std::cin >> n;
	for (int i = 0; i < n; i++)
	{
		int p;
		std::cin >> p;
		mx = std::max(mx, p);
		s += p;
	}
	s -= mx;
	s += mx / 2;
	std::cout << s << std::endl;
	return (0);
}
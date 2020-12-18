#include <iostream>

int main(void)
{

	int h, a;
	int ans = 0;
	std::cin >> h >> a; 
	while (h > 0)
	{
		++ans;
		h -= a;
	}
	std::cout << ans << std::endl;
	return (0);
}
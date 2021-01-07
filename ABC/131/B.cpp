#include <iostream>
#include <algorithm>

int main(void)
{
	int n, l;
	int sl, lx;

	sl = 0;
	std::cin >> n >> l;
	lx = 100000000;
	for(int i = 1; i <= n; i++)
	{
		sl += i + l - 1;
		if (abs(i + l - 1) < abs(lx))
			lx = i + l - 1;
	}
	std::cout << sl - lx << std::endl;
	return (0); 
}
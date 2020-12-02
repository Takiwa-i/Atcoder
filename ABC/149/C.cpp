#include <iostream>
#include <vector>
#include <vector>

#define N 150000

int main(void)
{
	int x;
	
	std::cin >> x;
	std::vector<bool> p(N, true);
	p[0] = false;
	p[1] = false;
	for (int i = 2; i <= N; i++)
	{
		if (p[i])
		{
			for (int j = 2 * i; j <= N; j += i)
				p[j] = false;
		}
	}
	for (int i = 2; i <= N; i++)
	{
		if (p[i] && i >= x)
		{
			std::cout << i << std::endl;
			return (0);
		}
	}
	return (0);
}
#include <iostream>
#include <vector>

int main(void)
{
	int n, k, d, a;
	int ans = 0;
	std::cin >> n >> k;	
	std::vector<int> N(n, 0);
	for (int i = 0; i < k; i++)
	{
		std::cin >> d;
		for (int j = 0; j < d; j++)
		{
			std::cin >> a;
			N[a - 1] = 1; 
		}
	}
	for (int i = 0; i < n; i++)
	{
		if (N[i] == 0)
			++ans;
	}
	std::cout << ans << std::endl;
	return (0);
}
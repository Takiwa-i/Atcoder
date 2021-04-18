#include <iostream>
#include <vector>

int main(void)
{
	int n, m;
	std::cin >> n >> m;
	std::vector<int> DA(2000, 0);
	std::vector<int> DB(2000, 0);
	for (int i = 0; i < n; i++)
	{
		int a;
		std::cin >> a;
		DA[a]++;
	}
	for (int i = 0; i < m; i++)
	{
		int b;
		std::cin >> b;
		DB[b]++;
	}
	for (int i  = 1; i <= 1000; i++)
	{
		if ((DA[i] != 0 && DB[i] == 0) || (DB[i] != 0 && DA[i] == 0))
			std::cout << i << " ";
	}
	std::cout << std::endl;
	return (0);
}
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

int main(void)
{
	int n, m;
	int p;
	int suc = 0;
	int pen = 0;
	std::string s;

	std::cin >> n >> m;
	std::vector<int> WA(n, 0);
	std::vector<int> AC(n, 0);
	for (int i = 0; i < m; i++)
	{
		std::cin >> p;
		std::cin >> s;
		if (s == "AC" && AC[p - 1] == 0)
		{	
			++suc;
			++AC[p - 1];
		}
		else if (s == "WA" && AC[p - 1] == 0)
		{
			++WA[p - 1];
		}

	}
	for (int i = 0; i < n; i++)
	{
		if (AC[i] != 0)
			pen += WA[i];
	}
	std::cout << suc << " " << pen << std::endl;
	return (0);
}
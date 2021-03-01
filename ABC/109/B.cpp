#include <iostream>
#include <string>
#include <map>
#include <vector>

int main(void)
{
	int n;
	std::cin >> n;
	std::vector<std::string> W(n);
	std::map<std::string, int> O;
	for (int i = 0; i < n; i++)
	{
		std::cin >> W[i];
		O[W[i]]++;
	}
	for (int i = 1; i < n; i++)
	{
		if (W[i - 1].back() != W[i][0] || O[W[i]] != 1)
		{
			std::cout << "No\n";
			return (0);
		}
	}
	std::cout << "Yes\n";
	return (0);
}
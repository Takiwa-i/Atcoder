#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

int main(void)
{
	int n, m;

	std::cin >> n >> m;
	std::vector<std::vector<std::pair<int, int> > >City(n + 1);
	for (int i = 0; i < m; i++)
	{
		int p, y;
		std::cin >> p >> y;
		--p;
		City[p].push_back(std::make_pair(y, i));
	}
	for (int i = 0; i < n; i++)
		std::sort(City[i].begin(), City[i].end());
	std::vector<std::string> A(m);
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < City[i].size(); j++)
		{
			int ansidx = City[i][j].second;
			std::string p = std::to_string(i + 1);
			std::string citynum = std::to_string(j + 1);
			while (p.size() < 6)
				p = "0" + p;
			while (citynum.size() < 6)
				citynum = "0" + citynum;
			A[ansidx] = p + citynum;
		}
	}
	for (int i = 0; i < m; i++)
		std::cout << A[i] << std::endl;
	return (0);
}
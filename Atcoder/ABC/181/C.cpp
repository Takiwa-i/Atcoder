#include <iostream>
#include <utility>
#include <vector>

bool check(std::pair<int, int> &P1, std::pair<int, int> &P2, std::pair<int, int> &P3)
{
	int vx1, vx2, vy1, vy2;

	if (P1.first == P2.first && P2.first == P3.first)
		return (true);
	if (P1.second == P2.second && P2.second == P3.second)
		return (true);
	vx1 = P2.first - P1.first;
	vx2 = P3.first - P1.first;
	vy1 = P2.second - P1.second;
	vy2 = P3.second - P1.second;
	if (vx1 * vy2 == vx2 * vy1)
		return (true);
	return (false);
}

int main(void)
{
	int n, x, y;

	std::cin >> n;
	std::vector<std::pair<int, int> > P(n);
	for (int i = 0; i < n; i++)
		std::cin >> P[i].first >> P[i].second;
	for (int i = 0; i < n - 2; i++)
	{
		for (int j = i + 1; j < n - 1; j++)
		{
			for (int k = j + 1; k < n; k++)
			{
				if (check(P[i], P[j], P[k]))
				{
					std::cout << "Yes" << std::endl;
					return (0);
				}
			}
		}
	}
	std::cout << "No" << std::endl;
	return (0);
}
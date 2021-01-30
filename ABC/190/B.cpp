#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

int main(void)
{
	int n, s, d;
	bool flag = false;

	std::cin >> n >> s >> d;
	for (int i = 0; i < n; i++)
	{
		int x, y;
		std::cin >> x >> y;
		if (x < s && y > d)
		{
			flag = true;
		}

	}
	if (flag)
		std::cout << "Yes" << std::endl;
	else
		std::cout << "No" << std::endl;
	return (0);
}
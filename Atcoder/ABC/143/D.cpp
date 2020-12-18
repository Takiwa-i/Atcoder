#include <iostream>
#include <vector>
#include <algorithm>

int main(void)
{
	int n;
	int ans = 0;

	std::cin >> n;
	std::vector<int> l(n, 0);
	for (int i = 0; i < n; i++)
		std::cin >> l[i];
	std::sort(l.begin(), l.end(), std::greater<int>());
	for (int i = 0; i < n - 2; i++)
	{
		for (int j = i + 1; j < n - 1; j++)
		{
			for (int k = j + 1; k < n; k++)
			{
				if (l[i] < l[j] + l[k])
					++ans;
			}
		}
	}
	std::cout << ans << std::endl;
	return (0);	
}
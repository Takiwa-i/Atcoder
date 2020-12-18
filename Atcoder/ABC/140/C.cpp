#include <iostream>
#include <vector>
#include <algorithm>
#include <deque>

int main(void)
{
	int n;
	int f, s;
	int ans = 0;

	std::cin >> n;
	std::vector<int> B(n - 1);
	std::deque<int> Q;
	for (int i = 0; i < n - 1; i++)
		std::cin >> B[i];
	Q.push_back(B[0]);
	Q.push_back(B[0]);
	for (int i = 1; i < n - 1; i++)
	{
		if (Q.back() > B[i])
		{
			Q.pop_back();
			Q.push_back(B[i]);
		}
		Q.push_back(B[i]);
	}
	for (int i = 0; i < n; i++)
		ans += Q[i];
	std::cout << ans << std::endl;
	return (0);
}

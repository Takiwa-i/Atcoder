#include <iostream>
#include <deque>
#include <algorithm>
#include <vector>

int main(void)
{
	int n, k;
	int ans = 0;

	std::cin >> n >> k;
	std::deque<int> Q;
	std::deque<int> CP;
	for (int i = 0; i < n; i++)
	{
		int v;
		std::cin >> v;
		CP.push_back(v);
	}
	for (int a = 0; a <= std::min(n, k); a++)
	{
		for (int b = 0; a + b <= std::min(n, k); b++)
		{
			Q = CP;	
			std::vector<int> V;
			int pre = 0;
			for (int i = 0; i < a; i++)
			{
				if (Q.empty())
					break ;
				pre += Q.front();
				V.push_back(Q.front());
				Q.pop_front();
			}
			for (int i = 0; i < b; i++)
			{
				if (Q.empty())
					break ;
				pre += Q.back();
				V.push_back(Q.back());
				Q.pop_back();
			}
			std::sort(V.begin(), V.end());
			for (int i = 0; i < std::min(k - a - b, (int)V.size()); i++)
			{
				if (V[i] < 0)
					pre -= V[i];
			}
			ans = std::max(ans, pre);
		}
	}
	std::cout << ans << std::endl;
	return (0);
}
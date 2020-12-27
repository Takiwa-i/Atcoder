#include <iostream>
#include <queue>
#include <algorithm>

int main(void)
{
	unsigned long long n, m, k, ans, count;
	unsigned long long a, b, mb;
	std::queue<unsigned long long> A;
	std::queue<unsigned long long> B;
	std::cin >> n >> m >> k;
	for (int i = 0; i < n; i++)
	{
		std::cin >> a;
		A.push(a);
	}
	for (int i = 0; i < m; i++)
	{
		std::cin >> b;
		B.push(b);
	}
	ans = 0;
	count = 0;
	while (count <= k)
	{
		if (A.empty() && B.empty())
			break ;
		if (!A.empty() && !B.empty())
		{
			if (A.front() <= B.front())
			{
				mb = A.front();
				A.pop();
			}
			else
			{
				mb = B.front();
				B.pop();
			}
			if (count > k - mb)
				break ;
			count += mb;
			++ans;
		}
		else if (B.empty())
		{
			mb = A.front();
			A.pop();
			if (count > k - mb)
				break ;
			count += mb;
			++ans;
		}
		else if (A.empty())
		{
			mb = B.front();
			B.pop();
			if (count > k - mb)
				break ;
			count += mb;
			++ans;
		}
	}
	std::cout << ans << std::endl;
	return (0);
}
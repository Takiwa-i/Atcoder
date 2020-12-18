#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

int main(void)
{
	int n, m;
	int stamp;
	long ans = 0;
	std::cin >> n >> m;
	stamp = n;
	std::vector<int> A(m);
	std::vector<int> B;
	if (m == 0)
	{
		std::cout << 1 << std::endl;
		return (0);
	}
	for (int i = 0; i < m; i++)
	{
		int a;
		std::cin >> a;
		A[i] = a;
	}
	std::sort(A.begin(), A.end());
	if (A[0] - 1 > 0)
		B.push_back(A[0] - 1);
	for (int i = 0; i < m - 1; i++)
	{
		int d = A[i + 1] - A[i] - 1;
		if (d > 0)
			B.push_back(d);
	}
	if (n - A[m - 1] > 0)
		B.push_back(n - A[m - 1]);
	for (std::vector<int>::iterator i = B.begin(); i != B.end(); i++)
		stamp = std::min(stamp, *i);
	for (std::vector<int>::iterator i = B.begin(); i != B.end(); i++)
		ans += std::ceil(((double)*i / (double)stamp));
	std::cout << ans << std::endl;
	return (0);
}
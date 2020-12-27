#include <iostream>
#include <vector>
#include <algorithm>

typedef unsigned long long ull;


bool check(ull middle, std::vector<ull>& A, std::vector<ull>& B, ull k, ull n, ull m)
{
	ull time = 4294967295;
	for (ull i = 0; i <= n; i++)
	{
		if (middle - i <= m)
			time = std::min(time, A[i] + B[middle - i]);
		if (time <= k)
			return true;
	}
	if (time > k)
		return false;
	return true;
}

int main()
{
	ull n, m, k;
	std::cin >> n >> m >> k;
	std::vector<ull> A(n + 1);
	std::vector<ull> B(m + 1);
	A[0] = 0;
	B[0] = 0;
	for (int i = 1; i < n + 1; i++)
	{
		ull a;
		std::cin >> a;
		A[i] = a + A[i - 1];
	}
	for (int i = 1; i < m + 1; i++)
	{
		ull b;
		std::cin >> b;
		B[i] = b + B[i - 1];
	}
	ull bottom = 0;
	ull top = m + n;
	while (bottom + 1 < top)
	{
		ull middle = (bottom + top) / 2;
		if (check(middle, A, B, k, n, m))
			bottom = middle;
		else
			top = middle; 
	}
	if (check(top, A, B, k, n, m))
		std::cout << top << '\n';
	else
		std::cout << bottom << '\n';
	return 0;
}
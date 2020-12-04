#include <iostream>

#define ull unsigned long long
#define M 1000000001

ull count(ull m)
{
	ull count = 0;

	while (m > 0)
	{
		m /= 10;
		++count;
	}
	return (count);
}

void solve(ull a, ull b, ull x, ull start, ull end, ull &ans)
{
	ull d;
	ull m = (start + end) / 2;

	d = count(m);
	if (a * m + d * b == x || end - start <= 1)
	{
		ans = m;
		return;
	}
	if (a * m + d * b > x)
		solve(a, b, x, start, m, ans);
	else if (a * m + d * b < x)
		solve(a, b, x, m, end, ans);
}

int main(void)
{
	ull a, b, x;
	ull ans;

	ans = 0;
	std::cin >> a >> b >> x;
	if (a + b > x)
	{
		std::cout << 0 <<std::endl;
		return (0);
	}
	solve(a, b, x, 1, M, ans);
	std::cout << ans << std::endl;
	return (0);
}
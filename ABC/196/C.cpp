#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

long long power(long long x, long long n)
{
	long long ans = 1;
	while (n > 0)
	{
		if (n & 1)
			ans = ans * x;
		x = x * x;
		n /= 2;
	}
	return (ans);
}

long long count_digit(long long n)
{
	long long count = 0;
	while (n > 0)
	{
		n /= 10;
		++count;
	}
	return (count);
}

bool check(long long x, long long n, long long dig)
{
	long long num;

	num = 0;
	std::string s = std::to_string((x));
	if (s.size() * 2 > dig)
		return (false);
	s = s + s;
	for (int i = 0; i < s.size(); i++)
	{
		num = num * 10 + (s[i] - '0');
	}
	return (num <= n);
}

int main(void)
{
	long long n;
	long long ans = 0;
	std::cin >> n;
	long long dig = count_digit(n);
	long long m = power(10, dig / 2);
	for (long long i = 1; i <= m; i++)
	{
		if (check(i, n, dig))
			++ans;
	}
	std::cout << ans << std::endl;
	return (0);
}
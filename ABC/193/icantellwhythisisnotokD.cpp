#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>

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

long long calc(long long s, long long add, long long count)
{
	return (s - add * power(10, count) + add * power(10, count + 1));
}

int main(void)
{
	long long k;
	std::string s, t;
	long long p = 0;

	std::cin >> k >> s >> t;
	long long ss = 0;
	long long st = 0;
	std::vector<long long> MS(10, 0);
	std::vector<long long> MT(10, 0);
	for(int i = 0; i < 4; i++)
	{
		MS[s[i] - '0']++;
		MT[t[i] - '0']++;
	}
	for (long long i = 1; i < 10; i++)
	{
		ss += i * power(10, MS[i]);
		st += i * power(10, MT[i]);
	}
	for (long long x = 1; x < 10; x++)
	{
		for (long long y = 1; y < 10; y++)
		{
			if (x == y)
			{
				if (MS[x] + MT[y] + 2 > k)
					continue ;
			}
			else if (MS[x] + 1 + MT[x] > k || MT[y] + 1 + MS[y] > k)
				continue ;
			long long nss = calc(ss, x, MS[x]);
			long long nst = calc(st, y, MT[y]);
			if (nss > nst)
			{
				if (x == y)
				{
					int cx = k - MS[x] - MT[y];
					p += cx * (cx - 1);
				}
				else
				{
					p += (k - MS[x] - MT[x]) * (k - MT[y] - MS[y]);
				}
			}

		}
	}
	std::cout << std::fixed << std::setprecision(15) << (double)(p) / (9 * k - 8) / (9 * k - 9) << std::endl;
	return (0);
}
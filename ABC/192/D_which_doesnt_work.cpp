#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <limits>

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

bool check(std::string x, int base, long long m)
{
	std::string s;
	while (m > 0)
	{
		char c = (char)((m % base) + '0');
		s = c + s;
		m /= base;
	}
	std::string nx;
	int i = 0;
	while (x[i] == '0')
		++i;
	for (int j = i; i < x.size(); i++)
	{
		nx = nx + x[i];
	}
	if (s.size() > nx.size())
		return (true);
	if (s.size() < nx.size())
		return (false);
	for (int i = 0; i < nx.size(); i++)
	{
		int xx = nx[i] - '0';
		int ss = s[i] - '0';
		if (ss > xx)
			return (false);
	}
	return (true);
}

int calc(std::string x)
{
	char c = x[0];
	for (int i = 0; i < x.size(); i++)
	{
		if (c < x[i])
			c = x[i];
	}
	return ((int)(c - '0'));
}


int main(void)
{
	std::string x;
	int ans = 0;
	long long m;
	
	std::cin >> x >> m;
	int d = calc(x);
	d++;
	long long left = d;
	long long right = 1000000000000000000;
	long long middle;
	while (right - left > 1)
	{
		middle = (right + left) / 2;	
		if (check(x, middle, m))
			left = middle;
		else
			right = middle;
	}
	//std::cout << "right " << right << "left " << left << std::endl;
	if (!(check(x, right, m)))
		std::cout << left - d + 1 << std::endl;
	else
		std::cout << right - d + 1 << std::endl;
	return (0);
}
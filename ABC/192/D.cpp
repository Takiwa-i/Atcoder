#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <limits>



bool check(std::string x, long long base, long long m)
{
	std::string s;
	std::vector<long long> V;
	while (m > 0)
	{
		V.push_back(m % base);
		m /= base;
	}
	std::reverse(V.begin(), V.end());
	if (V.size() > x.size())
		return (true);
	if (V.size() < x.size())
		return (false);
	for (int i = 0; i < x.size(); i++)
	{
		long long xx = (long long)(x[i] - '0');
		long long ss = V[i];
		if (xx == ss)
			continue ;
		else if (xx < ss)
			return (true);
		else
			return (false);
	}
	return (true);
}

int calc(std::string x)
{
	int m = -1;
	for (int i = 0; i < x.size(); i++)
	{
		if (m < (int)(x[i] - '0'))
			m = (int)(x[i] - '0');
	}
	return (m);
}


int main(void)
{
	std::string x;
	long long m;
	const long long INF = 1LL<<60;
	
	std::cin >> x >> m;
	if (x.size() == 1)
	{	
		long long nx = (long long)std::stoi(x);
		if (nx <= m)
			std::cout << 1 << std::endl;
		else
			std::cout << 0 << std::endl;
		return (0);
	}
	int d = calc(x);
	long long left = (long long)d;
	long long right = INF;
	long long middle;
	while (right > left + 1)
	{
		middle = (right + left) / 2;	
		if (check(x, middle, m))
			left = middle;
		else
			right = middle;
	}
	std::cout << left - d << std::endl;
	return (0);
}

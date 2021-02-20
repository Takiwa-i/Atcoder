#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

long long func(long long n)
{
	long long big = 0;
	long long small = 0;
	std::string s = std::to_string(n);
	std::vector<char> V;
	for (int i = 0; i < s.size(); i++)
		V.push_back(s[i]);
	std::sort(V.begin(), V.end(), std::greater<char>());
	for (int i = 0; i < V.size(); i++)
	{
		big = big * 10 + (V[i] - '0');
	}
	std::sort(V.begin(), V.end());
	for (int i = 0; i < V.size(); i++)
	{
		small = small * 10 + (V[i] - '0');
	}
	return (big - small);
}


int main(void)
{
	long long n;
	int k;
	

	std::cin >> n >> k;
	long long a = n;
	for (int i = 0; i < k; i++)
	{
		a = func(a);
	}
	std::cout << a << std::endl;
	return (0);
}
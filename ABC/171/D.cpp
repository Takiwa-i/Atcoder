#include <iostream>
#include <map>
#include <algorithm>

int main(void)
{
	long long n, q, a, b, c;
	long long s = 0;
	std::map<long long, long long> m;
	std::cin >> n;
	for (long long i = 0; i < n; i++)
	{
		std::cin >> a;
		s += a;
		m[a]++;
	}
	std::cin >> q;
	for (long long i = 0; i < q; i++)	
	{
		std::cin >> b >> c;
		s = s - m[b] * b + m[b] * c;
		m[c] += m[b];
		m[b] = 0;
		std::cout << s << std::endl;
	}
	return (0);
}
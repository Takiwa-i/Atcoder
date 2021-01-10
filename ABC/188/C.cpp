#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <deque>


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

int winner(int start, int end, std::vector<long long> &A)
{
	long long m = 0;
	int ans;
	for (int i = start; i < end; i++)
	{
		if (A[i] > m)
		{
			m = A[i];
			ans = i;
		}
	}
	return (ans);
}


int main(void)
{
	long long n;
	long long pn;
	std::cin >> n;
	pn = power(2, n);
	std::vector<long long> A(pn);
	for (int i = 0; i < pn; i++)
		std::cin >> A[i];
	int p = winner(0, pn / 2, A);
	int q = winner(pn / 2, pn, A);
	if (A[p] < A[q])
		std::cout << p + 1 << std::endl;
	else
		std::cout << q + 1 << std::endl; 
	return (0);
}

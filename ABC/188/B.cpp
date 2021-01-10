#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <deque>


int main(void)
{
	int n;

	long long ans;
	std::cin >> n;
	std::vector<int> A(n);
	std::vector<int> B(n);
	for (int i = 0; i < n; i++)
		std::cin >> A[i];
	for (int i = 0; i < n; i++)
		std::cin >> B[i];
	ans = 0;
	for (int i = 0; i < n; i++)	
	{
		ans += A[i] * B[i];
	}
	if (ans == 0)
		std::cout << "Yes" << std::endl;
	else
		std::cout << "No" << std::endl;
	return (0);
}

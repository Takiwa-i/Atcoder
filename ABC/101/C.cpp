#include <iostream>
#include <vector>
#include <algorithm>

int main(void)
{
	int n, k;
	std::cin >> n >> k;
	n--;
	k--;
	std::cout << n / k + (n % k != 0)  << std::endl;
	return (0);
	
}
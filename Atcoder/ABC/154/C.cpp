#include <iostream>
#include <vector>
#include <algorithm>

int main(void)
{
	int n;
	std::cin >> n;
	std::vector<int> A(n);
	for (int i = 0; i < n; i++)
		std::cin >> A.at(i);
	std::sort(A.begin(), A.end());
	for (std::vector<int>::iterator i = A.begin(); i != A.end(); i++)
	{
		std::vector<int>::iterator j = std::lower_bound(A.begin(), A.end(), *i); 
		if (*i == *j && i != j)
		{
			std::cout << "NO\n";
			return (0);
		}
	}
	std::cout << "YES\n";
	return (0);
}
#include <iostream>
#include <vector>
#include <algorithm>

int main(void)
{
	int n;
	int a, b;
	int count = 0;

	std::cin >> n;
	std::vector<int> P(n);
	std::vector<int> Q(n);
	std::vector<int> V(n);
	for (int i = 0; i < n; i++)
		std::cin >> P[i];
	for (int i = 0; i < n; i++)
		std::cin >> Q[i];
	V = P;
	std::sort(V.begin(), V.end());
	do{
		if (V == P)
			a = count;
		if (V == Q)
			b = count;
		++count;
	} while(std::next_permutation(V.begin(), V.end()));
	std::cout << std::abs(a - b) << std::endl;
	return (0);
}
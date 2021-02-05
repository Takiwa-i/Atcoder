#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

int main(void)
{
	int n, q;
	std::string s;

	std::cin >> n >> q;
	std::cin >> s;
	std::vector<int> A(n + 1, 0);
	std::vector<int> ANS;
	for (int i = 0; i < s.size(); i++)
	{
		if (i + 1 < s.size() &&  s[i] == 'A' && s[i + 1] == 'C')
			A[i + 1] = A[i] + 1;
		else
			A[i + 1] = A[i];
	}
	for (int i = 0; i < q; i++)
	{
		int l, r;
		std::cin >> l >> r;
		l--;
		r--;
		ANS.push_back(A[r] - A[l]);
	}
	for (int i = 0; i < q; i++)
		std::cout << ANS[i] << std::endl;
	return (0);
}
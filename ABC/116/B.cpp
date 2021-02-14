#include <iostream>
#include <vector>

int main(void)
{
	int s;

	std::cin >> s;
	std::vector<bool> M(10000001, false);
	std::vector<int> A;
	M[s] = true;
	A.push_back(s);
	while (true)
	{
		if (s % 2 == 0)
			s /= 2;
		else
			s = 3 * s + 1;
		A.push_back(s);
		if(M[s])
			break;
		M[s] = true;
	}
	std::cout << A.size() << std::endl;
	return (0);
}
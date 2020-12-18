#include <iostream>
#include <vector>

int main(void)
{
	int n;
	std::vector<int> A;
	bool flag = true;

	std::cin >> n;
	A.resize(n);
	for (int i = 0; i < n; i++)
		std::cin >> A.at(i);
	for (std::vector<int>::iterator i = A.begin(); i != A.end(); i++)
	{
		if (*i % 2 == 0)
		{
			if ((*i % 3 != 0) && (*i % 5 != 0))
			{	
				flag = false;
				break ;
			}

		}
	}
	if (flag)
		std::cout << "APPROVED\n";
	else
		std::cout << "DENIED\n";
	return (0);
}
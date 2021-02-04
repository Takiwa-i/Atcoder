#include <iostream>
#include <vector>

int main(void)
{
	int k;
	bool exist = false;
	std::vector<int>  A(5);
	for (int i = 0; i < 5; i++)
		std::cin >> A[i];
	std::cin >> k;
	for (int i = 0; i < 5; i++)
	{
		for (int j = i + 1; j < 5; j++)
		{
			if(A[j] - A[i] > k)
			{
				exist = true;
				break ;
			}
		}
	}
	if (exist)
		std::cout << ":(" << std::endl;
	else
		std::cout << "Yay!" << std::endl;
	return (0);
}
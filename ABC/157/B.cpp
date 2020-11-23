#include <iostream>
#include <vector>
#include <algorithm>

int main(void)
{
	std::vector<std::vector<int> > A(3, std::vector<int>(3, 0));
	int n;
	bool flag = false;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			std::cin >> A[i][j];
		}
	}
	std::cin >> n;
	for (int x = 0; x < n; x++)
	{
		int b;
		std::cin >> b;
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				if (A[i][j] == b)
					A[i][j] = -1;
			}
		}
	}
	for (int i = 0; i < 3; i++)
	{
		if ((A[i][0] == -1 && A[i][1] == -1 && A[i][2] == -1) || (A[0][i] == -1 && A[1][i] == -1 && A[2][i] == -1))
		{
			flag = true;
			break ;
		}
	}
	if ((A[0][0] == -1 && A[1][1] == -1 && A[2][2] == -1) || (A[0][2] == -1 && A[1][1] == -1 && A[2][0] == -1))
		flag = true;
	if (flag)
		std::cout << "Yes\n";
	else
		std::cout << "No\n";
	return (0);
}
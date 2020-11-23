#include <iostream>

int main(void)
{
	int n;
	int first;
	int second;
	int ans = 0;
	
	std::cin >> n;
	for (int i = 0; i < n; i++)
	{
		std::cin >> first >> second;
		if (first == second)
			++ans;
		else
			ans = 0;
		if (ans == 3)
		{
			std::cout << "Yes\n";
			return (0);
		}
	}
	std::cout << "No\n";
	return (0);

}
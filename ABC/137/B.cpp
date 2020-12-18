#include <iostream>

int main(void)
{
	int k, x;
	int start, end;

	std::cin >> k >> x;
	start = std::max(-1000000, x - k + 1);
	end = std::min(1000000, x + k - 1);
	for (int i = start; i <= end; i++)
	{
		std::cout << i;
		std::cout << " ";
	}
	std::cout << std::endl;
	return (0);
}
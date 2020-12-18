#include <iostream>

int main(void)
{
	int a, b;
	int socket = 1;
	int count = 0;
	
	std::cin >> a >> b;
	while (socket < b)
	{
		socket = socket - 1 + a;
		++count;
	}
	std::cout << count << std::endl;
	return (0);
}
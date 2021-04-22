#include <iostream>

int main(void)
{
	int a, b;
	int c;

	std::cin >> a >> b;
	c = b - a;
	int tower = 1;
	for (int i = 0; i < c; i++)
	{
		tower += i;
	}
	std::cout << tower - a - 1 << std::endl;
	return (0);
}
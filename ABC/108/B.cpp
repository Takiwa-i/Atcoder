#include <iostream>


int main(void)
{
	int x1, y1, x2, y2;

	std::cin >> x1 >> y1 >> x2 >> y2;
	int a = x2 - x1;
	int b = y2 - y1;
	std::cout << x2 - b << " " << y2 + a << " " << x1 - b << " " << y1 + a << std::endl;
	return (0);
}
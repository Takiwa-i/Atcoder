#include <iostream>

int main(void)
{
	int H, W;
	int h, w;
	std::cin >> H >> W;
	std::cin >> h >> w;
	std::cout << H * W - (h * W + H * w - h * w) << std::endl;
	return (0);
}
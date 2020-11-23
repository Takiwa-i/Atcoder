#include <iostream>
#include <string>

int main(void)
{
	long long a, b;
	std::string B;
	std::cin >> a >> B;
	b = (B[0] - '0') * 100 + (B[2] - '0') * 10 + (B[3] - '0');
	std::cout << a * b / 100 << std::endl;
	return (0);
}


/*
int main(void)
{
	long long a, b100;
	double b;

	std::cin >> a >> b;
	b *= 100;
	b100 = (long long)(b + 0.01);
	std::cout << (long long)(a * b100 / 100) << std::endl;
	return (0);
}*/
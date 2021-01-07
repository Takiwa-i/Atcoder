#include <iostream>


long long gcd(long long a, long long b)
{
	if (b == 0)
		return (a);
	return (gcd(b, a % b));
}

int main(void)
{
	long long a, b, c, d;
	long long na, nb;
	std::cin >> a >> b >> c >> d;
	long long l = c / gcd(c, d) * d;
	--a;
	na = (a / c + a / d) - (a / l);
	nb = b / c + b / d - (b / l);
	std::cout << (b - nb) - (a - na) << std::endl;
	return (0);
}
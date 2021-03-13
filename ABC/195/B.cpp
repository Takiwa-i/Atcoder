#include <iostream>
#include <vector>
#include <string>
#include <algorithm>



int main(void)
{
	int a, b, w;
	std::cin >> a >> b >> w;
	std::string s = "UNSATISFIABLE";
	w *= 1000;
	int bottom  = w / b;
	int top = w / a;
	if (w % b != 0)
		bottom += 1;
	if (bottom <= top)
		std::cout << bottom << " " << top << std::endl;
	else
		std::cout << s << std::endl;
	return (0);
}
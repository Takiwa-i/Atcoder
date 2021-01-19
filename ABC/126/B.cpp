#include <iostream>
#include <string>

int main()
{
	std::string s;
	int head;
	int tail;
	std::cin >> s;
	head = std::stoi(s.substr(0, 2));
	tail = std::stoi(s.substr(2, 2));
	
	if (head < 1 || head > 12)
	{
		if (tail >= 1 && tail <= 12)
			std::cout << "YYMM" << std::endl;
		else
			std::cout << "NA" << std::endl;
	}
	else if (tail < 1 || tail > 12)
		std::cout << "MMYY" << std::endl;
	else
		std::cout << "AMBIGUOUS" << std::endl;
	return (0);
}


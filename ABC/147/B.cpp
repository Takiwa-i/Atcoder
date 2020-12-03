#include <iostream>
#include <string>

int main(void)
{
	std::string s;
	int tail;
	int head;
	int ans = 0;
	head = 0;
	std::cin >> s;
	tail = s.size() - 1;	
	while (head < tail)
	{
		if (s[head] != s[tail])
			++ans;
		++head;
		--tail;
	}
	std::cout << ans << std::endl;
	return (0);
}
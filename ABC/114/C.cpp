#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

#define SEVEN 1
#define FIVE 2
#define THREE 4
#define ALL 7

void dfs(long long &count, long long n, long long now, int used)
{
	if (now > n)
		return ;
	if (used == ALL)
		++count;
	dfs(count, n, now * 10 + 7, used | SEVEN);
	dfs(count, n, now * 10 + 5, used | FIVE);
	dfs(count, n, now * 10 + 3, used | THREE);
	
}


int main(void)
{
	long long n;
	long long count = 0;
	std::cin >> n;
	dfs(count, n, 0, 0)	;
	std::cout << count << std::endl;
	return (0);
}
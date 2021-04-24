#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <stdlib.h>
#include <stdio.h>

int main(void)
{
	int n, q;
	int rev = 0;
	std::cin >> n;
	char *s1 = (char *)calloc(n + 1, sizeof(char));
	char *s2 = (char *)calloc(n + 1, sizeof(char));
	for (int i = 0; i < n; i++)
		std::cin >> s1[i];
	for (int i = 0; i < n; i++)
		std::cin >> s2[i];
	std::cin >> q;
	char *first = s1;
	char *second = s2;
	for (int i = 0; i < q; i++)
	{
		int t, a, b;
		std::cin >> t >> a >> b;
		if (t == 1)
		{
			--a;
			--b;
			char save;
			if (n <= a)
			{
				a -= n;
				b -= n;
				save = second[a];
				second[a] = second[b];
				second[b] = save;
			}
			else if (b < n)
			{
				save = first[a];
				first[a] = first[b];
				first[b] = save;
			}
			else
			{
				b -= n;
				save = first[a];
				first[a] = second[b];
				second[b] = save; 
			}
		}
		else
		{
			char *s;
			s = first;
			first = second;
			second = s;
		}
	}
	printf("%s%s\n", first, second);
	return (0);
}
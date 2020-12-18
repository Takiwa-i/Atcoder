#include <iostream>
#include <deque>
#include <algorithm>
#include <iomanip>

int main(void)
{
	int n;
	double a, b, c;
	double ans = 0.0;
	std::deque<double> A;

	std::cin >> n;
	A.resize(n);
	for (int i = 0; i < n; i++)
		std::cin >> A[i];
	std::sort(A.begin(), A.end());
	while (!(A.empty()))
	{
		a = A.front();
		A.pop_front();
		b = A.front();
		A.pop_front();
		c = (double)((a + b) / 2.0);
		if (A.empty())
		{
			ans = c;
			break ;
		}
		A.push_front(c);
	}
	std::cout << std::fixed << std::setprecision(10) << ans << std::endl;
	return (0);
}
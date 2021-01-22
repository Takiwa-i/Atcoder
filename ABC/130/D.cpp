#include <iostream>
#include <vector>
#include <algorithm>

#define ll long long

int main(void)
{
	ll n, k;
	ll ans = 0;

	std::cin >> n >> k;
	std::vector<ll> A(n, 0);
	for (ll i = 0; i < n; i++)
		std::cin >> A[i];
	ll right = 0;
	ll sum = 0;
	for (ll left = 0; left < n; left++)
	{
		while(right < n && sum < k)
		{
			sum += A[right];
			right++;
		}
		if (sum < k)
			break ;
		ans += n - right + 1;
		if (left == right)
			++right;
		else
			sum -= A[left];
	}
	std::cout << ans << std::endl;
	return (0);

}
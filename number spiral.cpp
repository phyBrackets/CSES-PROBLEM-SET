#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
	ll r, c;
	cin >> r;
	cin >> c;
	ll ans = 0;
	ll z = max(r, c);
	ll z2 = (z - 1) * (z - 1);
	if (z % 2 == 0)
	{
		if (z == c)
		{
			ans = z2 + r;
		}
		else
		{
			ans = z2 + 2 * z - c;
		}
	}
	else {
		if (r == z)
		{
			ans = z2 + c;
		}
		else
		{
			ans = z2 + 2 * z - r;
		}

	}


	cout << ans << endl;

}
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	ll t;
	cin >> t;
	while (t-- > 0)
	{
		solve();

	}

	return 0;
}

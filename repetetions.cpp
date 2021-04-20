#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ll i=0, max = INT_MIN, cnt[150] = {0};
    string s;
    cin >> s;
    while(s[i] != '\0')
    {
        ll c = 0;
        while(s[i] == s[i+1] && s[i] != '\0'){
			c++;
			i++;
        }
        if(c > cnt[s[i] - '0'])
	    cnt[s[i] - '0'] = c;
	i++;
    }
    for(ll i=0; i<150; i++)
        if(cnt[i] > max)
	    max = cnt[i];
    cout << max+1 << endl;
    return 0;
}

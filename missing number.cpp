#include <bits/stdc++.h>
using namespace std;


int main()
{
    long long n,sum=0;
    cin>>n;
    long long arr[n-1];
    for(int i=0;i<n-1;i++){
        cin>>arr[i];
        sum+=arr[i];
    }
  long long ans = (n*(n+1))/2  - sum;


    cout << abs(ans);
}

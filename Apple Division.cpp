#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin>>n;
    long long a[n],ts=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        ts+=a[i];
    }
    long long ans=INT_MAX;
    for(int i=0;i<(1<<n);i++){
        long c=0;
        for(int j=0;j<n;j++){
            if(1<<j & i)
                c+=a[j];
        }
        ans = min(ans ,abs(ts-c-c));

    }
    cout<<ans;
    return 0;


}

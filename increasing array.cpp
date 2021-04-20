#include<bits/stdc++.h>
using namespace std;

int main(){
    int t=1;
    while(t--){
    long long n;
    cin>>n;
    long long a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    long long mx=a[0];
    long long sum=0;
    for(int i=1;i<n;i++){
        if(a[i]<mx)
            sum+=abs(a[i]-mx);
            else
        mx=a[i];
    }
    cout<<sum;
    }
    return 0;

}

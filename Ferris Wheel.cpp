#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n,tw,gd=0;
    cin>>n>>tw;
    vector<long long> v(n);
    for(long long i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());


    long long i=0;
    long long j=n-1;

    while(i<=j){
        if((v[i]+v[j])>tw)
            j--;
        else{
            i++;
            j--;
        }
        gd++;
    }


    cout<<gd<<endl;
    return 0;
}

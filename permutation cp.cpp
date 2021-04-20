#include<bits/stdc++.h>
#define pb push_back
using namespace std;
int main(){
    int t=1;
    while(t--){
    long long  n;
    cin>>n;
    vector<int>v;
    int i=1,j=2;

    while(j<=n){
            v.pb(j);
    j+=2;

    }

    while(i<=n){
            v.pb(i);
    i+=2;

    }

    if(n<=3 && n!=1){
        cout<<"NO SOLUTION";
    }
    else if(n==1)
        cout<<1;
    else{
        for(int i=0;i<v.size();i++){
            cout<<v[i]<<" ";
        }
    }
    }
return 0;
}

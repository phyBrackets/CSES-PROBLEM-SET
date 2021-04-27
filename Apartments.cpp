#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n,m,k,ans=0,t;
    cin>>n>>m>>k;
    vector<int>a,b;


    for(long long i=0;i<n;i++){
        cin>>t;
        a.push_back(t);
    }

      for(long long i=0;i<m;i++){
        cin>>t;
        b.push_back(t);
    }


        sort(a.begin(),a.end());
        sort(b.begin(),b.end());


        long long i=0,j=0;

        while(i<m && j<n){
            if(b[i] >= (a[j]-k) && (a[j]+k) >= b[i]){
                ans++;
                i++;
                j++;
            }
            else if(b[i]<a[j]-k){
                i++;
            }
            else{
                j++;
            }


        }
        cout<<ans;
}

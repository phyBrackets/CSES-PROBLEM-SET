#include<bits/stdc++.h>
using namespace std;

int main(){
    int q;
    cin>>q;

    while(q--){
        long long v,x=9;
        cin>>v;
      for(long long i=1; ;i++){
        if(v<=i*x){
            x= (x/9) +(--v/i);
            while(++v%i){
                x/=10;
            }
            cout<<x%10<<endl;
            break;
        }
         v=v-(i*x);
         x=x*10;
      }

    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n,m,t,cust;

    cin>>n>>m;
    multiset<long long,greater<int>> tickets;
    for(int i=0;i<n;i++){
        cin>>t;
        tickets.insert(t);
    }


    for(int i=0;i<m;i++){
        cin>>cust;
         auto it = tickets.lower_bound(cust);
         if(it==tickets.end())
            cout<<-1<<endl;
         else{
            cout<<*it<<endl;
            tickets.erase(it);
         }
    }
    return 0;

}

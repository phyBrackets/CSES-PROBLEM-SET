#include<bits/stdc++.h>
using namespace std;
int main(){
 int n,k;
 cin>>n>>k;

 map<int,int> positionOfValue;
 for(int i=0;i<n;i++){
    int value;
    cin>>value;

    if(positionOfValue.count(k-value)){
        cout<<positionOfValue[k-value]<<" "<<i+1<<endl;
        return 0;
    }
    positionOfValue[value]=i+1;
 }
 cout<<"IMPOSSIBLE"<<endl;
}

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> length(n);

    for(int i=0;i<n;i++){
        cin>>length[i];

    }

    sort(length.begin(),length.end());
    long long cost=0;
    for(int i=0;i<n;i++){
        cost+= abs(length[i]-length[n/2]);
    }
    cout<<cost<<endl;

}

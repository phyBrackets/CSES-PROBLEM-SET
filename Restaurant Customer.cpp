#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<pair<int,int>> events;
    for(int i=0;i<n;i++){
        int start ,ending;
        cin>>start>>ending;
        events.push_back({start,1});
        events.push_back({ending,-1});

    }
    sort(events.begin(),events.end());

    int actcustomer=0;
    int maxcustomer=0;
    for(int i=0;i<events.size();i++){
        actcustomer += events[i].second;
        maxcustomer = max(maxcustomer,actcustomer);
    }
    cout<<maxcustomer<<endl;
}

#include<bits/stdc++.h>
using namespace std;

bool cmp(pair<int,int> &a, pair<int,int> &b){
    return (a.second<b.second);

}
int main(){
    int n;
    cin>>n;
    vector<pair<int,int>> events(n);

    for(int i=0;i<n;i++){
        cin>>events[i].first >>events[i].second;

    }
    sort(events.begin(),events.end(),cmp);
    int i=0;
    int endOfLastMovie=-1;
    int movies = 0;
    while(i<n){
        if(events[i].first>= endOfLastMovie){
            movies++;
            endOfLastMovie=events[i].second;
            i++;
        }
        else{
            i++;
        }
    }

    cout<<movies<<endl;
}

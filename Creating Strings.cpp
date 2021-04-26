#include<bits/stdc++.h>
using namespace std;
#define all(s) s.begin(), s.end()

int main(){
    string s;
    cin>>s;


    sort(all(s));
    vector<string> ans;

    do{
        ans.push_back(s);
    }while(next_permutation(all(s)));

    cout<<ans.size()<<"\n";

    for(string v:ans){
        cout<<v<<"\n";
    }

    return 0;
}

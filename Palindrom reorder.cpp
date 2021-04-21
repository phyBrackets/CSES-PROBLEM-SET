#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    vector<char>v1,v2;
    int f[26]={0};
    for(int i=0;i<s.size();i++)
        f[s[i]-65]++;
    int c=0;
    for(int i=0;i<26;i++)
        if(f[i]%2!=0)
        c++;

    if(c>1)
        cout<<"NO SOLUTION";

    else{

        for(int i=0;i<26;i++){
            if(f[i]%2!=0){
                while(f[i]--)
                    v2.push_back(i+65);

            }

            else if(f[i]>0 && f[i]%2==0){
                int x=f[i]/2;
                while(x--)
                    v1.push_back(i+65);
            }
        }


    }


    for(int i=0;i<v1.size();i++)
        cout<<v1[i];

    for(int i=0;i<v2.size();i++)
        cout<<v2[i];

      for(int i=v1.size()-1;i>=0;i--){
        cout<<v1[i];
      }


      return 0;
}

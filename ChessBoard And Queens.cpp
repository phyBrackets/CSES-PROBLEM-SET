#include<bits/stdc++.h>
using namespace std;
long long ways;
bool col[16],diag1[16],diag2[16],reserved[8][8];

void search(long long r){
    if(r==8){
        ways++;
        return;
    }
    for(int c=0;c<8;c++){
        if(col[c] || diag1[r+c] || diag2[r-c+7] || reserved[r][c])
            continue;
        col[c]=diag1[r+c]=diag2[r-c+7]=1;
        search(r+1);
        col[c]=diag1[r+c]=diag2[r-c+7]=0;

    }

}
int main(){
    for(int i=0;i<16;i++){
        col[i]=diag1[i]=diag2[i]=false;
    }
    string x;

    for(int j=0;j<8;j++){
        cin>>x;
        for(int k=0;k<8;k++){
            reserved[j][k]=x[k]!='.';
        }
    }

    search(0);
    cout<<ways;
}

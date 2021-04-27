#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n;
        cin>>n;
    long long  a[n];
    for(long long i=0;i<n;i++){
        cin>>a[i];
    }

   long long maxSum=0;
   long long currSum=0;

   for(long long i=0;i<n;i++){
    currSum+=a[i];

    if(currSum>maxSum)
        maxSum=currSum;
    if(currSum<0)
        currSum=0;
   }
   if(maxSum==0){
    sort(a,a+n);
    cout<<a[n-1]<<endl;
   }
   else{
   cout<<maxSum<<endl;
   }

}

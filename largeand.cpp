#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
 
int bit(ll n){
   int b=-1;
   int count=0;
   for(int i=31;i>=0;i--){
     if()
   }

 }

 int main(){
     int n;
     cin>>n;
     vector<ll> arr(n);
     for(int i=0;i<n;i++) cin>>arr[i];
     int maxIndex=0;
     for(int i=1;i<n;i++){
         if(arr[maxIndex]<arr[i]) maxIndex=i;
     }
     ll sum=-1;
     for(int i=0;i<n;i++){
         if(i!=maxIndex){
           ll n1=arr[maxIndex]&arr[i];
           if(n1>sum)sum=n1;
         }
     } 
   cout<<"\n"<<sum<<endl;
 }
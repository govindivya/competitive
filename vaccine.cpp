#include <bits/stdc++.h>
using namespace std;


int main()
{ 
    int t;
    cin>>t;
    while ((t--))
    {
         int n,p,x,y;
         cin>>n>>p>>x>>y;
         int arr[n+1];
         for(int i=1;i<=n;i++) cin>>arr[i];
         int time=0;
         for(int i=1;i<=p;i++){
           if(arr[i]==1) time+=y;
           else time+=x;
           
         }
         cout<<time<<endl;

    }
    
}
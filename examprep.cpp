#include<iostream>
using namespace std;

int main(){

    int t;
    cin>>t;
    while ((t--))
    {
         long long int m,n,time;
         cin>>m>>n>>time;
         if(time*n>=m){
             cout<<"NO\n";
         }
         else
         {
             
             cout<<"YES\n";
         }
         
    }
    
}
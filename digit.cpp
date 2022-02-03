#include <bits/stdc++.h>
using namespace std;

int main()
{
   int t;
   cin>>t;
   while(t--){
       long long int num;
       int d;
       cin>>num>>d;
       string s=to_string(num);
       int l=-1;
       for(int i=0;i<s.length();i++){
           if((s[i]-48)==(char)d){
               l=i;
               break;
           }
       }
   }

}
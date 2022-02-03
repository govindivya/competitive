#include <iostream>
#include<math.h>
using namespace std;

long long int hcf(long long int a,long long int b){
    if(a==b) return b;
    if(a%b==0) return b;
    if(b%a==0) return a;
    if(a>b) return hcf(a%b,b);
    else return hcf(a,b%a);  
}

int main()
{


    int t;
    cin >> t;
    while ((t--))
    {
        long long int a,b;
        cin>>a>>b;
        long long int c=hcf(a,b);
        if(c>1){
            cout<<"YES\n";
        }
        else cout<<"NO\n";
         

    }
     
}
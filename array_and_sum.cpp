#include <iostream>
using namespace std;

int main()
{

#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
#endif
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int x=1;
        while(2*x<=n) x*=2;
        if(n>2) cout<<(max(n-x+1,x/2))<<endl;
        else cout<<"1\n";
    }
}
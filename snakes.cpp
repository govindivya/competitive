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
    cin>>t;
    while (t--)
    {
        int l;
        cin >> l;
        char a[l];

        bool isValid = true;
        for (int i = 0; i < l; i++)
        {
            cin >> a[i];
        }
        int t = 0, h = 0;
        for (int i = 0; i < l; i++)
        {
            if(t>h || (h-t)>1){
                isValid=false;
                break;
            }
            if (a[i] != '.' && a[i] != 'T' && a[i] != 'H')
            {
                isValid = false;
                break;
            }
            if (a[i] == 'H')  h++;
            if (a[i] == 'T')  t++;

        }
        if(!isValid ||(h!=t)){
            cout<<"Invalid"<<endl;
        }
        else{
            cout<<"Valid"<<endl;
        }
    }
}
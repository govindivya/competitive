#include <iostream>
using namespace std;

int main()
{
    // your code goes here

#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
#endif

    int t, n, s, a, x;
    cin >> t;
    while (t--)
    {

        cin >> n;
        s = 0;
        x = 100;
        for (int i = 0; i < n; i++)
        {
            cin >> a;
            s += a;
            if (a)
                x++;
        }
        if (s >= 100 && s < x)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}
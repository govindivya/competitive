#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> V(n);
        for (int i = 0; i < n; i++)
            cin >> V[i];
        bool flag = true;
        if (n % 2 == 0)
        {
            flag = false;
        }
        else
        {
            int start = 0, end = n - 1;
            int counter = 1;
            while (start <= end)
            {
                if (V[start] != counter or V[end] != counter)
                {
                    flag = false;
                    break;
                }

                counter++;
                start++;
                end--;
            }
        }
        if (flag)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
}
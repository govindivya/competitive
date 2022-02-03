#include <bits/stdc++.h>
using namespace std;
int f(int arr[], int n, int k, int m)
{
    int ans = 2;
    for (int i = 0; i < n && ans >= 0; i++)
    {
        int temp = arr[i] + k * m;
        cout<<"temp is :"<<temp<<endl;
        if (temp % (k + 1) != 0)
        {
            ans--;
        }
    }
    return ans;
}

int main()
{
    int n, k;
    int t;
    cin >> t;
    for (int j = 0; j < t; j++)
    {
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        if (n == 2)
        {
            cout <<"YES"<< endl;
        }
        else
        {
            int larg = std::max(arr[0], arr[1]);
            int slarg = std::min(arr[0], arr[1]);
            for (int i = 2; i < n; i++)
            {
                if (arr[i] >= larg)
                {
                    slarg = larg;
                    larg = arr[i];
                }
                else if (arr[i] >= slarg)
                {
                    slarg = arr[i];
                }
            }
            int s = f(arr, n, k, larg);
            if (s > 0)
            {
                cout<<"YES"<< endl;
                continue;
            }
            s = f(arr, n, k, slarg);
            if (s > 0)
            {
                cout<<"YES"<< endl;
                continue;
            }
            cout<<"NO"<< endl;
        }
    }
    return 0;
}
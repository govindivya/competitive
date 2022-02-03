#include <bits/stdc++.h>
using namespace std;


 
int main()
{
    long long int n;
    cin >> n;
    long long int arr[n];
    long long int i, j;
    for (i = 0; i < n; i++)
        cin >> arr[i];
    long long int sum = 0;
    vector<bool> v=allOneZero(arr,n);
    if(v[0]){
        cout<<"0\n";
    }
    if(v[1]){
        cout<<"1\n";
    }
    for (i = n - 1; i >= 1; i--)
    {
        if (arr[i] != 0)
        {
            for (j = 0; j < i; j++)
            {
                if (arr[i] != 0 && arr[j] != 0)
            }
        }
        else continue;
    }
    cout << sum << endl;
}
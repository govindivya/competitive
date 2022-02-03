#include <bits/stdc++.h>
using namespace std;

const int maxLenght = 1000000000;

int calculateMax(int n)
{
    if (n == 1 || n == 2 || n == 3 || n == 4 || n == 5 || n == 6 || n == 7 || n == 8 || n == 9 || n == 10 || n == 11)
        return n;
    return max(n, (calculateMax(n / 2) + calculateMax(n / 3) + calculateMax(n / 4)));
}

int main()
{
#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
#endif

    int x;
    while (cin >> x)
    {
        cout << calculateMax(x)<<"\n";
    }
}
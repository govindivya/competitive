#include <bits/stdc++.h>
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
        int students;
        cin >> students;
        vector<int> A(students);
        vector<int> B(students);
        for (int i = 0; i < students; i++)
            cin >> A[i];
        for (int i = 0; i < students; i++)
            cin >> B[i];
         
        int count = 0;
        for (int i = 0; i < students; i++)
        { 
            if(A[i]-A[i-1]>=B[i]) count++;
        }
        cout << count << endl;
    }
    return 0;
}
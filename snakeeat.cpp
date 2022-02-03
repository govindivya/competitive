#include <bits/stdc++.h>
using namespace std;

int lowerBound(vector<int> &v, int num)
{
    int mid, start = 0, end = v.size() - 1;
    if (v[v.size() - 1] >= num)
        return v.size();
    if (v[0] < num)
        return 0;
    while (start < end)
    {
        mid = (start + end) / 2;
        if (v[mid] >= num)
            start = mid;
        else
            end = mid;
        if (end - start <= 1)
            return start + 1;
    }
    return mid + 1;
}

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
        int n, q;
        cin >> n >> q;
        vector<int> N(n), Q(q);
        for (int i = 0; i < n; i++)
            cin >> N[i];
        for (int i = 0; i < q; i++)
            cin >> Q[i];

        sort(N.rbegin(), N.rend());
        for (int i = 0; i < q; i++)
        {
            int lower = lowerBound(N, Q[i]);
            if (lower >= N.size())
            {
                cout << N.size() << endl;
                continue;
            }
            int count = lower;
            int end = N.size() - 1;
            int start = lower;
            while (start <= end)
            {
                int d = Q[i] - N[start];
                if (d > (end - start))
                    break;
                else
                {
                    count++;
                    start++;
                    end -= d;
                }
            }
            cout << count << endl;
        }
    }

    return 0;
}

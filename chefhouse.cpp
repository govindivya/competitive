#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, m;
        scanf("%d%d", &n, &m);
        vector<string> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        vector<pair<int, int>> Pairs;
        int ans = 0;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (a[i][j] == '1')
                {
                    Pairs.push_back({i + 1, j + 1});
                }
            }
        }

        vector<int> dist(n + m,0);

        for (int j = 0; j < Pairs.size(); j++)
        {
            for (int k = j + 1; k < Pairs.size(); k++)
            {
                int x1, x2, y1, y2, d;
                x1 = Pairs[j].first;
                y1 = Pairs[j].second;
                x2 = Pairs[k].first;
                y2 = Pairs[k].second;
                d = abs(x2 - x1) + abs(y2 - y1);
                dist[d]++;
            }
        }
        for(int i=1;i<=m+n-2;i++){
            cout<<dist[i]<<endl;
        }
    }

    return 0;
}
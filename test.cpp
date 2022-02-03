#include<iostream>
#include<bits/stdc++.h>

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
    scanf("%d", &t);
    while (t--)
    {
        int n, m;
        scanf("%d%d", &n, &m);
        vector<pair<int, int>> Pairs;

        for (int i = 0; i < n+1; i++)
        {
            for (int j = 0; j < m+1; j++)
            {
                char c;
                scanf("%c",&c);
                if (c=='1')
                {
                    Pairs.push_back({i , j});
                   
                }
            }
        }

    
        vector<int> dist(n + m,0);

        for (int j = 0; j < Pairs.size(); j++)
        {
            for (int k = j + 1; k < Pairs.size(); k++)
            {
                int x1, x2, y1, y2, d;
                x1 = Pairs.at(j).first;
                y1 = Pairs.at(j).second;
                x2 = Pairs.at(k).first;
                y2 = Pairs.at(k).second;
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
#include <bits/stdc++.h>
using namespace std;

int ans[605], mat[1505][1505], ltr[1505][1505], rtl[1505][1505];
int main()
{
    int t;
    cin >> t;
    int offset = 600;
    while (t--)
    {
        int n, m, i, j, k;
        cin >> n >> m;
        char c[305][305];
        for (i = 1; i <= 1500; ++i)
        {
            if (i <= 604)
                ans[i] = 0;
            for (j = 1; j <= 1500; ++j)
            {
                rtl[i][j] = ltr[i][j] = mat[i][j] = 0;
            }
        }
        for (i = 1; i <= n; i++)
        {
            for (j = 1; j <= m; ++j)
            {
                cin >> c[i][j];
            }
        }
        for (i = 1; i <= n; i++)
        {
            for (j = 1; j <= m; ++j)
            {
               mat[i+offset][j+offset]=c[i][j]-'0';
            }
        }
        for (i = 1; i <= 1500; i++)
        {
            for (j = 1; j <= 1500; j++)
            {
                ltr[i][j] = mat[i][j] + ltr[i - 1][j - 1];
                rtl[i][j] = mat[i][j] + rtl[i - 1][j + 1];
            }
        }
        for (i = 1 + offset; i <= n + offset; i++)
        {
            for (j = 1 + offset; j <= m + offset; j++)
            {
                if (c[i - offset][j - offset] == '1')
                {
                    for (k = 1; k <= m + n - 2; k++)
                    {
                        ans[k] += (rtl[i][j - k] - rtl[i - k][j]) +
                                  (rtl[i + k][j] - rtl[i][j + k]) +
                                  (ltr[i][j + k] - ltr[i - k - 1][j - 1]) +
                                  (ltr[i + k - 1][j - 1] - ltr[i][j - k]);
                    }
                }
            }
        }

        for (i = 1; i <= m + n -2; i++)
        {
            int p = ans[i]/2;
            cout << p << endl;
            ans[i] = 0;
        }
    }
}
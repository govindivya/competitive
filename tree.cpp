#include <iostream>
using namespace std;

int main()
{

#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
#endif
    int R, C;
    scanf("%d %d", &R, &C);
    int arr[R][C];
    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
        {
            arr[i][j] = 0;
        }
    }

    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
        {
            if (i == 0 && j == 0)
            {
                arr[i][j] = 1;
            }
            else if (i == 0)
            {
                if (arr[i][j - 1] == 0)
                    arr[i][j] = 1;
            }
            else if (j == 0)
            {
                if (arr[i - 1][j] == 0)
                    arr[i][j] = 1;
            }
            else if (arr[i][j - 1] == 0 && arr[i - 1][j] == 0)
                arr[i][j] = 1;
        }
    }
    int count = 0;
    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
        {
            if (arr[i][j])
            {
                count++;
            }
        }
    }
    printf("%d", count);
}
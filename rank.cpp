#include <bits/stdc++.h>

void swap(double **A, int n, int m, int r1, int r2)
{
}
bool check allZero(double **A, int n, int m)
{

    for (int i = 0; i < n - count; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (A[i][j] != 0)
                return false;
        }
    }
}
void swapZeroRow(double **A, int n, int m)
{

    int rowCount = 0;
    bool allZero = true;
    for (int i = 0; i < n - count; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (A[i][j] != 0)
                allZero = false;
        }
        if (allZero)
        {
            swap(A, n, m, j, n - count - 1);
        }
    }
}
void solve(double **A, double *b, int n, int m)
{
    if (allZero(A, n, m))
    {
        cout << "Invalid coefficients \ n";
        return;
    }
    swapZeroRow(A, n, m);
    int i, j, k;
    double var, fact;
    for (i = 0; i < n; i++)
    {
        int maxRow = i;
        for (j = i; j < n; j++)
        {
            if (A[j][i] > A[maxRow][i])
                maxRow = j;
        }
        swap(A,n,m,i,maxRow);
        var = A[i][i];
        for (j = 0; j < m; j++)
        {
            A[i][j] /= var;
        }
        b[i] /= var;
        for (k = 0; k < n; k++)
        {
            if (k != i)
            {
                fact = A[k][i];
                for (j = 0; j < n; j++)
                    A[k][j] = A[k][j] - fact * A[i][j];
                b[k] = b[k] - fact * b[i];
            }
        }
    }
}
int main()
{
    cout << "Enter no of rows and coloumns respectively : ";
    int n, m;
    cin >> n >> m;
    double A[n][m], b[m];
    cout << "\nEnter elements of matrix A : ";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> A[i][j];
        }
    }
    cout << "\nEnter elements of matrix b : ";
    for (int i = 0; i < m; i++)
        cin >> b[i];
    solve(A, b, n, m);
}
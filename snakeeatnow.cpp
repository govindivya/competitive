#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;
typedef long long LL;
typedef vector<int> vi;

int lowerBound(vi &a, int k)
{
    //  retuns first occuring index of the element k
    int low = 0, high = a.size();
    while (low < high)
    {
        int mid = low + (high - low) / 2;
        if (a[mid] >= k)
            high = mid;
        else
            low = mid + 1;
    }
    return low;
}

int main()
{
    short int t;
    cin >> t;
    while (t--)
    {
        int q, n;
        scanf("%d%d", &n, &q);
        vi N(n), Q(q);
        for (int i = 0; i < n; i++)
            scanf("%d", &N[i]);
        for (int i = 0; i < q; i++)
            scanf("%d", &Q[i]);

        sort(N.begin(), N.end());
        vi V(n);
        V[0] = N[0];
        for (int i = 1; i < n; i++)
        {
            V[i] = N[i];
            V[i] += V[i - 1];
        }
        for (int i=0; i < q; i++)
        {
           int index=lowerBound(N,Q[i])-1;
           int ans=n-index-1;
           int low=0,high=index;
           while(low<high){
               int mid=low+(high-low)/2;
               int req=(index-mid)*Q[i]-(V[index]-V[mid]);
               if(req<=mid+1)
               high=mid;
               else low=mid+1;
           } 
           ans+=index-high;
           printf("%d\n",ans);
        }
    }
// vi v={1,2,3,4,5,6,7,8,9,10};
// cout<<lowerBound(v,10)<<endl;
return 0;
}
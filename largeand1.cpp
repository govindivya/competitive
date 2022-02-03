  #include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main()
{
    ll t;
    cin >> t;
    ll arr[t];
    for (ll i = 0; i < t; i++)
        cin >> arr[i];
    ll maxsum=0;

    for(ll i=0;i<t-1;i++){
        for(ll j=i+1;j<t;j++){
            ll sum=arr[i]&arr[j];
            if(sum>maxsum) maxsum=sum;
        }
    }
    cout<<maxsum;
}
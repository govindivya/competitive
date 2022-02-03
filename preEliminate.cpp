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
        int n,k;
        cin>>n>>k;
        vector<int> arr;
        while(n--){
            int num;
            cin>>num;
            arr.push_back(num);
        }
        sort(arr.rbegin(),arr.rend());
        int val=arr.at(k-1);
        int count=0;
        for(int i=k;i<arr.size();i++){
            if(arr.at(i)==val) count++;
        }
        cout<<k+count<<endl;
    }
    
    
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<pair<int, int>> arr;

        for (int i = 0; i < n; i++)
        {
            int num1, num2;
            cin >> num1 >> num2;
            arr.push_back({num2, num1});
        }
        sort(arr.begin(), arr.end());
        int count=0;
        int last=-1;
        for(int i=0;i<n;i++){
            int num1=arr[i].first,num2=arr[i].second;
            if(num2<=last){
                continue;
                
            }
            else{
                count++;
                last=num1;
            }
            
        }
        
        cout<<count<<endl;
    }
    return 0;
}
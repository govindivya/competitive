#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    if(b==0) return  a;
    return gcd(b,a%b);
}

bool checkequal(int *arr,int n){
    for(int i=1;i<n;i++){
        if(arr[i]!=arr[i-1]){
            return false;
        }
    }
    return true;
}
int main()
{

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++) cin>>arr[i];
        list<int> a;
        for(int i=0;i<n;i++) a.push_back(arr[i]);
        vector<int>v;
        list<int> l;
        int count=0;
        while(!a.empty()){
            v.push_back(a.front());
            a.pop_front();
            for(int i=0;i<v.size();i++){
                while(!a.empty()){
                    int m=a.front();
                    a.pop_front();
                    if(gcd(m,v[i])==1){
                        v.push_back(m);
                    }
                    else{
                        l.push_back(m);
                    }

                }
                a=l;
                l.clear();
            }
            count++;
            v.clear();
            if(count>1) break;
        }

        if(count==1){
            cout<<"0\n";
            for(int i=0;i<n;i++)
            cout<<arr[i]<<" ";
            cout<<"\n";
        }
        else if(checkequal(arr,n)){
            if(arr[0]==47) arr[0]=2;
            else arr[0]=47;
            cout<<"1\n";
             for(int i=0;i<n;i++)
            cout<<arr[i]<<" ";
            cout<<"\n";
        }
        else{
            arr[0]=47;
            cout<<"1\n";
            for(int i=0;i<n;i++)
            cout<<arr[i]<<" ";
            cout<<"\n";
        }

    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
int main()
{
// #ifndef ONLINE_JUDGE
//   // for getting input from input.txt
//   freopen("input.txt", "r", stdin);
//   // for writing output to output.txt
//   freopen("output.txt", "w", stdout);
// #endif

int t;
cin>>t;

while(t--){
    int n;
    cin>>n;
    int A[n];
    int B[n];
    for(int i=0;i<n;i++) cin>>A[i];
    for(int i=0;i<n;i++) cin>>B[i];
    int minIndex=0;
    while(minIndex<=n-3){
        if(A[minIndex]<B[minIndex]){
            A[minIndex]+=1;
            A[minIndex+1]+=2;
            A[minIndex+2]+=3;
        }
        if(A[minIndex]<B[minIndex])  continue;
        if(A[minIndex]>B[minIndex]) break;
        if(A[minIndex]==B[minIndex]) minIndex++;
    }
    bool check=true;
    for(int i=0;i<n;i++){
      if(A[i]!=B[i]) check=false; 
    }
    if(check) cout<<"TAK"<<endl;
    else cout<<"NIE"<<endl;
}
}
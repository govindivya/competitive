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
        int t = 45;
        int A[] = {2, 3, 5, 7, 11, 13, 17,
                   19, 23, 29, 31, 37, 41,
                   43, 47, 53, 59, 61, 67,
                   71, 73, 79, 83, 89, 97,
                   101, 103, 107, 109, 113,
                   127, 131, 137, 139, 149,
                   157, 163, 167, 173, 179,
                   181, 191, 193, 197, 199};
        bool check =false;
        for (int i = 0; i < 45; i++)
        {
            for (int j = 0; j < 45; j++)
            {
                int num;
                if (i != j)
                {
                    num = A[i] * A[j];
                }
                for(int k=0;k<45;k++){
                    for(int l=0;l<45;l++){
                        int num1;
                        if(k!=l){
                            num1=A[k]*A[l];
                            if(num1+num==n){
                                 check=true;
                                break;
                            }
                        }
                    }
                    if(check==true) break;
                }
                 if(check==true) break;
            }
            if(check==true) break;
        }
        if(check) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
 #include<bits/stdc++.h>
 using namespace std;
 int main(){

     int a,b,c,d,e;
     vector<int> a1,a2,rem;
     cin>>a>>b>>c;
     int sum=0;
     for(int i=0;i<a;i++){
         cin>>d;
         sum+=d;
         a1.push_back(d);
     }
     for(int i=0;i<a;i++){
         cin>>e;
         a2.push_back(e);
     }
     for(int i=0;i<a;i++){
         rem.push_back(a1[i]-a2[i]);
     }
     sort(rem.begin(),rem.end());
     int pt=c;
     for(int i=0;i<a;i++){
         if(rem[i]<0||i+b<a&&pt!=0){
            sum-=rem[i];
            pt--;
         }
         else break;
            
     }
     cout<<sum;
     return 0;
 }
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

    int n;
    cin >> n;
    map<string, float> maps;
    float t = 0;
    for (int i = 0; i < n; i++)
    {
      string str;
      cin >> str;
      if (maps.count(str))
      {
        float num = maps.at(str);
        t += (float)num / 2;
        continue;
      }
      else
      {
        float num = 0;
        for (int k = 0; k < str.length(); k++)
        {
          if (k == 0)
          {
            num += 0.2;
          }
          else
          {
              if(str[k]=='d'||str[k]=='f'){
                if(str[k-1]=='j'||str[k-1]=='k') num+=0.2;
                else num+=0.4;
                
              }
             
              else {
                if(str[k-1]=='d'||str[k-1]=='f') num+=0.2;
                else num+=0.4;
                 
              }
              
          }
        }
        maps.insert({str, num});
        t += num;
      }
    }

    cout << t * 10 << endl;
  }

  return 0;
}
#include <iostream>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while ((t--))
    {

        string doors;
        cin >> doors;
        int l = doors.length();
  
        int count = 0;
        for (int i = 0; i < l; i++)
        {
            if (count % 2 == 0)
            {
                if (doors[i] == '0')
                {
                    count++;
                }
            }
            else
            {
                if (doors[i] == '1')
                    count++;
            }
        }

        cout<<count<<endl;
    }
}
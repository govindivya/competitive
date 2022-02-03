#include <iostream>

using namespace std;
void printNum(int num, int N)
{
    if (num > N)
        return;
    cout << num << endl;
    printNum(num * 10, N);
    printNum(num * 10 + 1,N);
    printNum(num * 10 + 2,N);
    printNum(num * 10 + 3,N);
    printNum(num * 10 + 4,N);
    printNum(num * 10 + 5,N);
    printNum(num * 10 + 6,N);
    printNum(num * 10 + 7,N);
    printNum(num * 10 + 8,N);
    printNum(num * 10 + 9,N);
  
}
int main()
{
    // int num;
    // cin >> num;
    for(int i=1;i<=9;i++) printNum(i,1000);
    return 0;
}
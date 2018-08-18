#include<iostream>
using namespace std;
int main()
{
  int t;
  int a;
  cin>>a;
    t = a;
    int rev = 0;
    while(a != 0)
    {
        rev = (rev * 10) + (a % 10);
        a = a/10;
    }
    cout<<rev;
return 0;
}

#include<bits/stdc++.h>
using namespace std;
void fnc(int **a)
{
    cout<<a<<endl;
}
int main()
{
    int *a ;
    int x = 1;
    *a = x;

    int **p = &a;
    cout<<a<<endl;
    cout<<p<<endl;
  // fnc(&a);
    return 0;
}


#include<bits/stdc++.h>
using namespace std;
//int n;
//char a[10];
void binary(char a[],int n)
{
    if(n < 1)
    {
        cout<<a<<endl;
        return;
    }
    a[n-1] = '0';
    binary(a,n - 1);
    a[n-1] = '1';
    binary(a,n-1);
}
int main()
{
   int n;
    cin>>n;
    char a[n];
    binary( a,n);
    return 0;
}

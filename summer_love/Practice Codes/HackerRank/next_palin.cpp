#include<iostream>
using namespace std;
int palin(int );
int main()
{
    int t;
    cin>>t;
    int a[t];
    int i;
    for(i = 0; i < t; i++)
    {
        cin>>a[i];
    }
    int j = 0;

    for(i = 0; i < t; i++)
    {
        j = a[i] + 1;
        while(j > a[i])
        {
         if(palin(j) == 1)
         {
             cout<<j<<endl;
             break;
         }
         j++;
        }
    }
    return 0;
}
int palin(int a)
{
    int t;
    t = a;
    int rev = 0;
    while(a != 0)
    {
        rev = (rev * 10) + (a % 10);
        a = a/10;
    }
    if(rev == t)
    {
        return 1;
    }
    return 0;
}

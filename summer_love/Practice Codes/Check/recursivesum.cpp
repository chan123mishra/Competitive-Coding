#include<bits/stdc++.h>
using namespace std;
int sum(int );
int main()
{
    int n;
    cin>>n;
    cout<<sum(n);
    return 0;
}
int sum(int a)
{

    if(a==1)
        return 1;

    int s = a;
    s = s + sum(--a);
    return s;
}

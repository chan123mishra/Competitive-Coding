#include<bits/stdc++.h>
using namespace std;
int area(int m,int n)
{
    int a = m * n;
    int sum = 0;
    int g = 0;
    if(m > n)
    {
        g = n;
    }
    else
        g = m;

    while(m > 0 && n > 0)
    {
        sum = sum + (m * n);
       // cout<<"loop\n";
        m--;
        n--;
    }

    return sum;
}
int main()
{

    int m,n;
    cin>>m>>n;
    int sum = area(m,n);
    cout<<sum;
}

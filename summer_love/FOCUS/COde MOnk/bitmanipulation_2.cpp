#include<bits/stdc++.h>
using namespace std;

int fnc(long long x)
{
    int ret = 0;
    while(x != 0)
    {
        ret += (x % 2);
        x /= 2;
    }
    return ret;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long m,n;
        cin>>m;
        cin>>n;
       m ^= n;
       //cout <<m<<endl;
       cout << fnc(m)<<endl;
    }
    return 0;
}

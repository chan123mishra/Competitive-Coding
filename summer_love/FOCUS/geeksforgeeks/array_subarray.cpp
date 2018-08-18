#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,n;
    cin>>m>>n;

    int a[m];
    int b[n];
    map<int,int>mp;
    for(int i = 0; i < m; i++)
    {
        cin>>a[i];
    }

    for(int i = 0; i < n; i++)
    {
        cin>>b[i];
    }
    if(m > n)
    {
        for(int i = 0; i <m; i++)
        {
            mp[a[i]] = 1;
        }

        int ctr = 0;
        for(int i = 0; i < n; i++)
        {
            if(mp[b[i]] == 1)
                ctr++;
        }

        if(ctr == n)
        {
            cout<<"Array b is subset of a"<<endl;
            return 0;
        }
    }

    else
    {
        for(int i = 0; i <n; i++)
        {
            mp[b[i]] = 1;
        }

        int ctr = 0;
        for(int i = 0; i < m; i++)
        {
            if(mp[a[i]] == 1)
                ctr++;
        }

        if(ctr == m)
        {
            cout<<"Array a is subset of b"<<endl;
            return 0;
        }
    }

    return 0;

}

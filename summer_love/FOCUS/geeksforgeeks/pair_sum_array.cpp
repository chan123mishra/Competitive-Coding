#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i = 0; i < n; i++)
        cin>>a[i];

    int x;
    cin>>x;
    map<int,int>mp;
    for(int i = 0; i <n;i++)
    {
        if(mp[x-a[i]] == 1)
        {
            cout<<"the numbers are "<<a[i]<<" and "<<x-a[i]<<endl;
            return 0;
        }
        mp[a[i]] = 1;
}

cout<<"No such pair is present"<<endl;
return 0;
}

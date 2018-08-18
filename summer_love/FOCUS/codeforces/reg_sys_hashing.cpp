#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<string,int>mp;
    int n;
    cin>>n;
    while(n--)
    {
        string str;
        cin>>str;
        if(mp[str] == 0)
        {
        cout<<"OK"<<endl;
        }

        else
        {
            cout<<str<<mp[str]<<endl;
        }
        mp[str] = mp[str] + 1;
    }
    return 0;
}

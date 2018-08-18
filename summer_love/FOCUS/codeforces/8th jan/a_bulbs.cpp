#include<bits/stdc++.h>
#include<sstream>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    map<int,int>mp;
    //for(int i = 0; i < m; i++)

    for( int i = 1; i <= n; i++)
    {
        //temp << i;
        //str1 = temp.str();

        int num;
        cin>>num;
        int ch;
        for(int j = 0; j < num; j++)
        {
            cin>>ch;
            mp[ch] = 1;
        }

      //cout<<"i = "<<(char)(48+i)<<endl;
      //cout<<"i = "<<i<<endl;

    }

    int fl = 0;
for(int i = 1; i <= m; i++)
{
    if(mp[i] != 1)
    {
        fl = 1;
        cout<<"NO"<<endl;
        break;
    }
}
    if(fl == 0)
        cout<<"YES"<<endl;

    /*map<char,int>::iterator it;
    for(it = mp.begin(); it != mp.end();it++)
        cout<<it->second<<endl;
*/
    return 0;
}

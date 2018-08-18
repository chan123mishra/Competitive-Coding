#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin>>n;

    int a[n];
    for(int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    //int x;
    //cin>>x;

    int vis[100006];
    vis[0] = 1;
    for(int i = 0; i < n; i++)
    {
        vis[a[i]] = 1;
    }
    int sum = 0;
    int prevsum = 0;
    for(int i = 0; i < n; i++)
    {
        prevsum = sum;
        sum = sum + a[i];

        if(vis[sum] == 1)
        {
            for(int j = prevsum; j <= sum; j++)
            {

                if(vis[j] == 0)
                {

                    cout<<"Ans = "<<j<<endl;
                    return 0;
                }
            }
        }

    }

    return 0;
}

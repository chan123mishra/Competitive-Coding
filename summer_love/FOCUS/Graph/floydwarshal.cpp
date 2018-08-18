#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[10][10];
    int path[10][10];
    int v,e;
    cin>>v>>e;
    int s,d,w;
    for(int i = 0; i < v; i++)
    {

        for(int j = 0; j < v; j++)
        {
            if(i == j)
            {
                a[i][j] = 0;
            }
            else
            a[i][j] = 9999;

            path[i][j] = -1;
        }
    }
    for(int i = 0; i < e; i++)
    {
        cin>>s>>d>>w;
        a[s][d] = w;
        path[s][d] = s;
    }

    for(int k = 0; k < v; k++)
    {
        for(int i = 0; i < v; i++)
        {
            for(int j = 0; j < v; j++)
            {
                if(a[i][j] > a[i][k] + a[k][j])
                {
                    a[i][j] = a[i][k] + a[k][j];
                    path[i][j] = path[k][j];
                }
            }
        }
    }

    for(int i = 0; i < v; i++)
    {
        for(int j = 0; j < v; j++)
        {
            if(a[i][j] == 9999)
            {
                cout<<"INF"<<" ";
                continue;
            }
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}

#include<bits/stdc++.h>
using namespace std;
int adj[10][10];
int visited[10];
int parent[10];
bool cycle = false;
void dfs(int s, int n)
{
    visited[s] = 1;

    for(int i = 0; i < n; i++)
    {
        if(adj[s][i])
        {
            if(!visited[i])
            {
                parent[i] = s;
                dfs(i,n);
            }
            else
            {
                if(parent[i] != s)
                {
                cycle = true;
                return;
                }
            }
        }

    }

    visited[s] = 0;


}
int main()
{
    int n;
    cin>>n;
    int e;
    cin>>e;
    memset(adj,0,sizeof(adj[0][0])*n*n);
    memset(visited,0,sizeof(visited));
    memset(parent,-1,sizeof(parent));
    int s,d;
    for(int i = 0; i < e; i++)
    {
        cin>>s>>d;
        adj[s][d] = 1;
    }


    for(int i = 0; i < n; i++)
    {
        if(!visited[i])
        {
            dfs(i,n);
        }
        if(cycle)
            break;
    }

    if(cycle)
    {
        cout<<"Cycle exists\n";
    }
    else
        cout<<"Cycle doesn't exist\n";

    return 0;

}

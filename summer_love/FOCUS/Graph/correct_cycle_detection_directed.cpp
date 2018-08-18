#include<bits/stdc++.h>
using namespace std;
int adj[10][10];
int visited[10];
int recStack[10];
bool cycle = false;
void dfs(int s, int n)
{
    visited[s] = 1;
    recStack[s] = 1;
        for(int i = 0; i < n; i++)
        {
            if(adj[s][i] == 1)
            {
                if(!visited[i])
                {
                    dfs(i,n);
                }
                else
                {
                    if(recStack[i] == 1)
                    {
                        cycle = true;
                        return;
                    }
                }
            }
        }

        recStack[s] = -1;
}

int main()
{
    int n;
    cin>>n;
    int e;
    cin>>e;
    memset(adj,0,sizeof(adj[0][0])*n*n);
    memset(visited,0,sizeof(visited));
    memset(recStack,-1,sizeof(recStack));
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

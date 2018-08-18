#include<bits/stdc++.h>
using namespace std;
int adj[105][105];
int visited[105][105];
int parent[105][105];
int dist[105][105];
bool issafe(int i, int j, int n, int m)
{
   if(i >= 1 && i <= n && j >= 1 && j <= m && !visited[i][j])
   {
       return true;
   }
   return false;
}
bool bfs(int i, int j, int &ctr, int k, int n, int m)
{
    queue<pair<int, int> >q;
    pair<int,int>p;
    parent[i][j] = -1;
    dist[i][j] = adj[i][j];
    visited[i][j] = 1;
    q.push(make_pair(i,j));
    while(!q.empty())
    {
        p = q.front();
       // cout<<"i = "<<p.first<<" j = "<<p.second<<" dist = "<<dist[p.first][p.second]<<endl;
        q.pop();
        if(p.first == n && p.second == m && dist[p.first][p.second] <= k)
        {
            return true;
        }
        if(issafe(p.first,p.second+1,n,m))
        {
            if(dist[p.first][p.second] + adj[p.first][p.second+1] <= k)
            {
                dist[p.first][p.second + 1] = dist[p.first][p.second] + adj[p.first][p.second+1];
                visited[p.first][p.second+1] = 1;
                q.push(make_pair(p.first,p.second+1));
            }
        }
        if(issafe(p.first+1,p.second,n,m))
        {
            if(dist[p.first][p.second] + adj[p.first+1][p.second] <= k)
            {
                dist[p.first+1][p.second ] = dist[p.first][p.second] + adj[p.first+1][p.second];
                 visited[p.first+1][p.second] = 1;
                q.push(make_pair(p.first+1,p.second));
            }
        }
         if(issafe(p.first+1,p.second+1,n,m))
        {
            if(dist[p.first][p.second] + adj[p.first+1][p.second+1] <= k)
            {
                dist[p.first+1][p.second + 1] = dist[p.first][p.second] + adj[p.first+1][p.second+1];
                 visited[p.first+1][p.second+1] = 1;
                q.push(make_pair(p.first+1,p.second+1));
            }
        }
    }

    return false;
}

bool flag;
void dfs(int i, int j, int &ctr, int k, int n, int m)
{
    visited[i][j] = 1;
    ctr = ctr + adj[i][j];
    if(ctr > k )
    {
        ctr = ctr - adj[i][j];
        visited[i][j] = 0;
    return;
    }
    if(i == n && j == m && ctr <= k)
    {
        cout<<ctr<<endl;
        flag = true;
        return;
    }
    if(issafe(i,j+1,n,m))
    {
        dfs(i,j+1,ctr,k,n,m);
    }
    if(issafe(i+1,j,n,m))
    {
        dfs(i+1,j,ctr,k,n,m);
    }
    if(issafe(i+1,j+1,n,m))
    {
        dfs(i+1,j+1,ctr,k,n,m);
    }
    ctr = ctr - adj[i][j];
    visited[i][j] = 0;
}
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        int n,m,k;
        cin>>n>>m>>k;
        flag = false;
        memset(adj,0,sizeof(adj[0][0])*(m+1)*(n+1));
        memset(visited,0,sizeof(visited[0][0])*(m+1)*(n+1));
        memset(parent,-1,sizeof(parent[0][0])*(m+1)*(n+1));
        memset(dist,0,sizeof(dist[0][0])*(m+1)*(n+1));
        for(int i = 1; i <= n; i++)
        {
            for(int j = 1; j <= m; j++)
            {
                cin>>adj[i][j];
            }
        }

        int ctr = 0;
       /* dfs(1,1,ctr,k,n,m);
        if(!flag)
            cout<<"-1"<<endl;
        */
        if(bfs(1,1,ctr,k,n,m))
            cout<<dist[n][m]<<endl;
        else
            cout<<"-1"<<endl;
    }
    return 0;
}

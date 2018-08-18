#include<bits/stdc++.h>
using namespace std;
int adj[10][10];
int visited[10];
stack<int>st;
void dfs_modified(int s, int n)
{
    visited[s] = 1;
    for(int i = 0; i < n; i++)
    {
        if(adj[s][i] && !visited[i])
        {
            dfs_modified(i,n);
        }
    }

    st.push(s);
}

void printoutput()
{
    if(st.empty())
        return;

    cout<<st.top()<<" ";
    st.pop();
    printoutput();
}
int main()
{
    int n;
    cin>>n;
    int e;
    cin>>e;
    memset(adj,0,sizeof(adj[0][0])*n*n);
    memset(visited,0,sizeof(visited));
    int s,d;
    for(int i = 0; i < e; i++)
    {
        cin>>s>>d;
        adj[s][d] = 1;
    }

    for(int i = 0; i < n; i++)
    {
        if(!visited[i])
            dfs_modified(i,n);
    }

    printoutput();
    cout<<endl;

    return 0;
}

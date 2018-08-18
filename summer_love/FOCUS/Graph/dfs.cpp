#include<bits/stdc++.h>
int adj[10][10];
int status[20];
int predecessor[20];
int dist[20];
using namespace std;
void dfs(int s, int v)
{
    stack<int>a;
    a.push(s);
    int cur;
    while(!a.empty())
    {
        cur = a.top();
        a.pop();
        if(status[cur] == 0)
        {
            cout<<cur<<" ";
            status[cur] = 1;
        }
        for(int i = v - 1; i >= 0; i--)
        {
                if(status[i] == 0 && adj[cur][i])
                    a.push(i);
        }
    }

}
/*void bfs(int s, int v)
{
queue<int>q;
int cur;
q.push(s);
status[s] = 1;
dist[s] = 0;
predecessor[s] = -1;


while(!q.empty())
{
    cur = q.front();
    cout<<cur<<" ";
    q.pop();
    for(int i = 0; i < v; i++)
    {

        if(adj[cur][i] && status[i] == 0)
        {
            q.push(i);
            status[i] = 1;
            predecessor[i] = cur;
            dist[i] = 1 + dist[predecessor[i]];
        }
    }
}
}*/
int main()
{
  int v;
    int e;

  /*  if(!g)
    {
        cout<<"Error\n";
        return 0;
    }
    */
    cin>>v;
    cin>>e;
    //(g->adj) =(int**)malloc(sizeof(g->ver * g->ver ));
   int i,j;
    //vector< vector<int> > a (v, vector<int>(v,0));
   //g->adj.swap(a);
    /*for(i = 0; i < g->ver; i++)
    {
        for(j = 0; j < g->ver; j++)
        {
           cout<< g->adj[i][j]<<" " ;
        }
        cout<<endl;
    }*/
    //cout<<"G->capacity is "<<a.capacity();
    int source,dest;
    for(int i = 0; i < e; i++)
    {

        cin>>source;
        cin>>dest;

        adj[source][dest] = 1;
    }
    for(int i = 0; i < v; i++)
    {
        status[i] = 0;
        dist[i] = INT_MAX;
        predecessor[i] = -2;
    }
    int src;
    cin>>src;
    cout<<"\n DFS:\n";
    dfs(src,v);

//    int dest;
    /*cout<<"\nEnter the destination\n";
    cin>>dest;
    cout<<"Distance from "<<src<<" is "<<dist[dest]<<"\n";
    */
    return 0;

}

#include<bits/stdc++.h>
using namespace std;

int adj[10][10];
queue<int>que;
int status[1000];
void bfs(int src, int v)
{
    que.push(src);
    int cur;
    status[src] = 2;
    while(!que.empty())
    {
        cur = que.front();
        cout<<cur <<" ";
        que.pop();
        status[cur] = 1;
        for(int i = 0; i < v; i++ )
        {
            if(adj[cur][i] == 1 && status[i] == 0)
            {
                que.push(i);
                status[i] = 2;
            }
        }
    }

}
void showGraph(int v)
{
    for(int i = 0; i <v ; i++)
    {
        for(int j = 0; j < v; j++)
        {
            if(adj[i][j] == 1)
            {
                cout<<i<<"->"<<j<<endl;
            }
        }
    }
}

int main()
{
   // Graph *g = (Graph *)malloc(sizeof(Graph));
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
    //adj.swap(a);
    showGraph(v);
     for(int i = 0; i < 20; i++)
        status[i] = 0;
    int s;
    cout<<"Enter source\n";
    cin>>s;
    bfs(s,v);

    return 0;
}

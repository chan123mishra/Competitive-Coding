#include<bits/stdc++.h>
using namespace std;
int adj[10][10];
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
    showGraph(v);
}

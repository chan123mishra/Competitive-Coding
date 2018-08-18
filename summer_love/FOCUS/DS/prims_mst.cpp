#include<bits/stdc++.h>
using namespace std;
int a[100][100];
//int mst[100];
int mst[100];
int key[100];
int parent[100];
#define mp make_pair 
int findmin(int n)
{
    int min_index = 0;
    int minval = INT_MAX;
    for(int i = 0; i < n; i++)
    {
            if(mst[i] != 1 && minval < key[i])
            {
                minval = key[i];
                min_index = i;
            }
    }

    return min_index;
}
void showGraph(int v)
{
    for(int i = 0; i <v ; i++)
    {
        for(int j = 0; j < v; j++)
        {
            if(a[i][j] != 0)
            {
                cout<<i<<"->"<<j<<endl;
            }
        }
    }
}
struct Compare
{
    bool operator() (pair<int,int> const &a, pair<int,int> const &b) { return a.second > b.second; }
};
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
    memset(mst,0,sizeof(mst));
    
    memset(key,INT_MAX,sizeof(key));
  //  memset(mst,-1,sizeof(mst));
    cin>>v;
    cin>>e;
    int weight;
    memset(a,0,(sizeof(a[0][0])*v*v));
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
    /*
    0 2 0 6 0
    2 0 3 8 5
    0 3 0 0 7
    6 8 0 0 9
    0 5 7 9 0
                      */
    int source,dest;
    for(int i = 0; i < v; i++)
    {
		for(int j = 0; j < v; j++)
		{
			cin>>a[i][j];
		}
        
    }

    int src;
   src = 0;
    key[src]  = 0;
    parent[src] = -1;
    mst[src] = 1;
    cout<<src<<" ";
   //mst[src] = 1;
	//int d = 0;
	int u;
   priority_queue<pair<int,int>, vector<pair<int,int> >, Compare >pq;
   pq.push(make_pair(src,0));
   while(!pq.empty())
   {
   	 u = pq.top().first;
   	 for(int i = 0; i < v; i++)
   	 {
   	 	if(a[u][i] && mst[i] != 1)
   	 	{
   	 		if(key[i] > a[u][i])
   	 		{
   	 			key[i] = a[u][i];
   	 			mst[i] = 1;
   	 			cout<<i<<" ";
   	 			pq.push(mp(i,key[i]));
				}
			}
   	 	
		}
   }
   cout<<endl;
}

#include<bits/stdc++.h>
using namespace std;
int adj[100][100];
int rgraph[100][100];
bool bfs(int n,int s, int t)
{
	
}

int maxflow(int n, int src, int sink)
{
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
		{ 
			rgraph[i][j] = adj[i][j];
		}
	}
	
	int parent[n];
	int max_flow;
	memset(parent,-1,sizeof(int)*n);
	while(bfs(n,s,t))
	{
		int curflow = INT_MAX;
		int u,v;
		v = t;
		while(u != s)
		{
			u = parent[v];
			curflow = min(curflow,rgraph[u][v]);
			v = u;	
		}
	}
}
int main()
{
	int n;
	cin>>n;
	memset(adj,0,sizeof(int)*n*n);
			
	int e;
	cin>>e;
	int s,d,w;
	for(int i = 0; i < e; i++)
	{
		cin>>s;
		cin>>d;
		cin>>w;
		adj[s][d] = w; 
	}
	
	int src,sink;
	cin>>src>>sink;
	int res = maxflow(n,src,sink);
	return 0;
}

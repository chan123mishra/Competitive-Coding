#include<bits/stdc++.h>
using namespace std;

int adj[20][20];
int color[20];
int visited[20];
bool bipartite = true;
void dfs(int s,int n)
{

	for(int i = 0;i < n; i++)
	{
	    if(adj[s][i] == 1)
        {
		if(color[i] == -1 )
		{
			color[i] = 1 - color[s];
			dfs(i,n);
		}
		else if(color[i] == color[s])
		{
			//cout<<"Its not a bipartite graph\n";
			bipartite = false;
			return;
		}



	}

}
}


int main()
{
	int n;
	cin>>n;
	memset(adj,0,sizeof(adj[0][0]) * n *n);
	memset(color,-1,sizeof(color));
	memset(visited,0,sizeof(visited));
	int e;
	cin>>e;
	int src,dest;
	for(int i = 0; i < e; i++)
	{
		cin>>src;
		cin>>dest;
		adj[src][dest] = 1;
	}

	for(int i = 0; i < n; i++)
    {
        if(color[i] == -1)
        {
            color[i] = 1;
            dfs(i,n);
        }
    }

    if(bipartite)
    {
        cout<<"Bipartite Graph\n";
    }
    else
        cout<<"Not a Bipartite Graph\n";

	return 0;
}

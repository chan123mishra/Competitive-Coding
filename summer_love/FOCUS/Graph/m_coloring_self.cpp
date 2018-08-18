#include<bits/stdc++.h>
using namespace std;
int adj[10][10];
int visited[10];
int color[10];
bool color_pos = true;
int colorcheck(int s, int clr, int n)
{
	int ctr = 1;
	for(int i = 0; i < n; i++)
	{
		if(adj[s][i] == 1)
		{
			if(color[i] != -1)
			{

				while(ctr <= clr)
				{
					if(color[i] == ctr)
					{
						ctr++;
					}
					else
					{
						break;
					}
				}

				if(ctr > clr)
				{
					return 0;
				}
			}
		}
	}

	return ctr;
}
void bfs(int s , int clr, int n)
{
	queue<int>q;
	q.push(s);
	color[s] = 	1;
	visited[s] = 1;
	while(!q.empty())
	{
		int v = q.front();
		q.pop();
		for(int i = 0; i < n; i++)
		{
			if(adj[v][i] == 1)
			{
				if(!visited[i])
				{
					if(colorcheck(i,clr,n))
					{
						color[i] = colorcheck(i,clr,n);
						//cout<<"Color["<<i<<"] = "<<color[i]<<endl;
						visited[i] = 1;
						q.push(i);
					}
					else
					{
					    //cout<<"Vertex is "<<i<<endl;
						color_pos = false;
						return;
					}
				}
			}
		}
	}
}
void printoutput(int n)
{
    for(int i = 0; i < n; i++)
    {
        cout<<"Color["<<i<<"] = "<<color[i]<<endl;
    }
}
int main()
{
    int n;
    cin>>n;
    int e;
    cin>>e;
    int clr;
    cin>>clr;
    memset(adj,0,sizeof(adj[0][0])*n*n);
    memset(visited,0,sizeof(visited));
    for(int i = 0; i < sizeof(color); i++)
    {
        color[i] = -1;
    }
    int s,d;
    for(int i = 0; i < e; i++)
    {
        cin>>s>>d;
        adj[s][d] = 1;
        adj[d][s] = 1;
    }

    s = 0;
    bfs(s,clr,n);
    if(color_pos)
    {
        printoutput(n);
    }
    else
    {
        cout<<"Coloring is not possible\n";
    }
    return 0;
}

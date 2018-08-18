#include<bits/stdc++.h>
using namespace std;
int adj[10][10];
int visited[10];
int color[10];
bool color_pos = true;
//colorcheck function is used for checking whether a vertex is safe to be colored with in the set of colors
//If it is safe , function returns the color which can be used to color the vertex, otherwise it returns 0
int colorcheck(int s, int clr, int n)
{
	int ctr = 1;
	for(int i = 0; i < n; i++)// Checking for all the adjacent vertices
	{
		if(adj[s][i] == 1)
		{
			if(color[i] != -1)//Check if the vertex is uncolored
			{

				while(ctr <= clr)//Loop till the assigned color does not overflow the color limit
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

//Normal bfs function where we traverse in level order and color each vertex if possible
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
					if(colorcheck(i,clr,n))//function used for checking whether a vertex can be colored or not
					{
						color[i] = colorcheck(i,clr,n);//assigning the color to the vertex
						visited[i] = 1;
						q.push(i);
					}
					else
					{
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
    int n;//Number of vertices
    cin>>n;
    int e;//Number of edges
    cin>>e;
    int clr;//Maximum limit of colors usage
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

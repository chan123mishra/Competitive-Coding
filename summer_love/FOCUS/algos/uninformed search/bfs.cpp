#include<bits/stdc++.h>
using namespace std;
int visited[100][100];
char adj[20][20];
int ctr = 0;
int dfs(int x, int y, int w, int h)
{

    if(x < 0 || x >= h || y < 0 || y >= w || adj[x][y] != '.')
    {
        return 0;
    }
    else
    {

    }
}
int main()
{
    int n;
    cin>>n;

    //memset(adj,0,sizeof(&a[0][0])*n*n);
    //memset(visited,0,sizeof(&visited[0][0])*n*n);
    while(n--)
    {
        int w,h;
        cin>>w>>h;
        pair<int,int>p;
        queue<pair<int,int>>q;
        int sx,sy;
        for(int i = 0; i < h; i++)
        {
            for(int j = 0; j < w; j++)
            {
                cin>>adj[i][j];
                if(adj[i][j] == '@')
                {
                    sx = i;
                    sy = j;
                }
            }
        }

        int res+1 = dfs(sx,sy,w,h);


    }



}

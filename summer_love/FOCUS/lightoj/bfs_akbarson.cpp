
#include<bits/stdc++.h>
using namespace std;
char a[1000][1000];
int visited[1001];
int dist[1001];
int parent[1001];
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        int m;
        cin>>n;
        cin>>m;
        //int a[n][n];
        int src,dest;
        memset(a,0,sizeof(&a[0][0]));
        memset(visited,0,sizeof(visited));
        memset(dist,-1,sizeof(dist));
        memset(parent,-1,sizeof(parent));
        int sx,sy;
        for(int i = 0; i < n; i++)
        {
       //     cout<<"HI der"<<endl;
            for(int j = 0; j < m; j++)
            {
                cin>>a[i][j];
                if(a[i][j] == '@')
                {
                    sx = i;
                    sy = j;
                }
            }

        }
    //cout<<"Adajacency Matrix looks like :-"<<endl;

        int s;
        cin>>s;
        queue<int>q;
        q.push(s - 1);
        dist[s-1] = 0;
        while(!q.empty())
        {
            int v = q.front();
           // cout<<v<<" is popped"<<endl;
            //cout<<v<<" ";
            visited[v] = 1;
            q.pop();

            //cout<<v + 1<<endl;
            for(int i = 0; i < n; i++)
            {
                if(a[v][i] == 6 && visited[i] != 1)
                {
                    visited[i] = 1;
                    q.push(i);
                    parent[i] = v;
                    dist[i] = dist[v] + 6;
                 //   cout<<"q contains "<<q.front()<<endl;
                }
            }

        }

        //cout<<"DIstance of different nodes form s = "<<s<<" are :-"<<endl;
        for(int i = 0; i < n; i++)
        {
            if(i != s-1)
            cout<<dist[i]<<" ";
        }
        cout<<endl;

}
return 0;
}

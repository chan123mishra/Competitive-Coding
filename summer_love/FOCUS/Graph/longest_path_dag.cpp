//Same program can work also for Shortest Paths in DAG(single source of course ,)) just by changing the condition and initioalisizing distance array with something bigger value
#include<bits/stdc++.h>
using namespace std;
int adj[100][100];
int indegree[100];
int dist[100];
bool top = false;
void topological(vector<int>&vec,int n)
{
    queue<int>que;
    int ctr = 0;
    for(int i = 0; i < n; i++)
    {
        if(indegree[i] == 0)
        {
            que.push(i);
        }
    }

    int v;

    while(!que.empty())
    {
        v = que.front();
        que.pop();
        ctr++;
        vec.push_back(v);
        for(int i = 0; i < n; i++)
        {
            if(adj[v][i] != 0)
            {
                if(--indegree[i] == 0)
                {
                    que.push(i);
                }
            }
        }
    }

    if(ctr == n)
    {
        top = true;
    }
}

void print(vector<int>vec)
{
    vector<int>::iterator it;
    for(it = vec.begin(); it != vec.end(); it++)
    {
        cout<<*it<<" ";
    }

    cout<<endl;
}

void longest_path(vector<int>vec, int src, int n)
{
    vector<int>::iterator it;
    dist[src] = 0;
    for(it = vec.begin(); it != vec.end(); it++)
    {
        if(dist[*it] != -999)
        {
        cout<<"src = "<<*it<<endl;
           for(int i = 0; i < n; i++)
            {
                if(adj[*it][i] != 0)
                {

                    if(dist[i] < dist[*it] + adj[*it][i]) // FOr shortest path just change this condition to be ,dist[i] > dist[*it] + adj[*it][i]
                        dist[i] = dist[*it] + adj[*it][i];
                }
            }
        }
    }
}

void displayoutput(int n)
{
    for(int i = 0; i < n; i++)
    {
        if(dist[i] == -999)
        {
            cout<<"INF"<<endl;
        }
        else
            cout<<dist[i]<<endl;

    }
}
int main()
{
    int n;
    cin>>n;
    int e;
    cin>>e;
    memset(adj,0,sizeof(adj[0][0])*n*n);
    memset(indegree,0,sizeof(indegree));

    for(int i = 0; i < n; i++)
        cout<<indegree[i]<<endl;


    for(int i = 0; i < n; i++)
        dist[i] = -999;
    int s,d,w;
    for(int i = 0; i < e; i++)
    {
        cin>>s>>d>>w;
        adj[s][d] = w;
        indegree[d]++;
    }
    vector<int>vec;
    topological(vec,n);
    //cout<<"Topological sorting:\n";
    //print(vec);
    int src;
    cout<<"Input source vertex\n";
    cin>>src;
    longest_path(vec,src,n);
    displayoutput(n);
    return 0;
}

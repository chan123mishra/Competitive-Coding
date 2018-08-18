#include<bits/stdc++.h>
using namespace std;
int adj[100][100];
int indegree[100];
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
            if(adj[v][i] == 1)
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
int main()
{
    int n;
    cin>>n;
    int e;
    cin>>e;
    memset(adj,0,sizeof(adj[0][0])*n*n);
    memset(indegree,0,sizeof(indegree));
    int s,d;
    for(int i = 0; i < e; i++)
    {
        cin>>s>>d;
        adj[s][d] = 1;
        indegree[d]++;
    }
    vector<int>vec;
    topological(vec,n);
    if(top)
    {
        print(vec);
    }
    else
    {
        cout<<"Topological Sorting not possible for this graph\n";
    }

    return 0;
}

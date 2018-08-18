#include<bits/stdc++.h>
using namespace std;
//int adj[20][20];
int parent[100];
int rankG[100];
int findparent(int s)
{
    if(parent[s] != s)
    {
        parent[s] = findparent(parent[s]);
    }

    return parent[s];
}
void makeunion(int s, int d)
{
    int px = findparent(s);
    int py = findparent(d);

    if(rankG[px] < rankG[py])
    {
        parent[px] = py;
    }
    else if(rankG[px] > rankG[py])
    {

        parent[py] = px;
    }
    else
    {
        parent[py] = px;
        rankG[px]++;
    }
}
struct compare
{
bool operator()(const pair<int,pair<int,int> >&i, const pair<int,pair<int,int> >&j)
{
    return i.first > j.first;
}
};
int main()
{
    int e,v;
    cin>>e>>v;
    int s,d,w;
priority_queue< pair<int,pair<int,int> >,vector<pair<int,pair<int,int> > >,compare >q;
    for(int i = 0; i <= v; i++)
    {
        parent[i] = i;
        rankG[i] = 0;
    }
    for(int i = 0; i < e; i++)
    {
        cin>>s>>d>>w;;

        q.push(make_pair(w,make_pair(s,d)));
         q.push(make_pair(w,make_pair(d,s)));
    }
    pair<int,pair<int,int> >temp;
    int i = 0;
    while(!q.empty() && i <= (v-1))
    {
        i++;
        temp = q.top();
        q.pop();
        if(findparent(temp.second.first) != findparent(temp.second.second) )
        {
            cout<<"Src = "<<temp.second.first<<" , Dest = "<<temp.second.second<<" , Weight = "<<temp.first<<endl;
            makeunion(temp.second.first,temp.second.second);
        }
    }
    return 0;
}

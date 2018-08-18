#include <iostream>
#include<bits/stdc++.h>
using namespace std;
/*
Input
5 5
1 2 5
1 3 2
3 4 1
1 4 6
3 5 5
*/
int dist[100005];
void dijsktra(vector<pair<int,int> >vec[], int n, int m)
{
	dist[0] = 0;
	//cout<<"ok"<<endl;
	priority_queue<pair<int,int> , vector<pair<int,int> >,greater< pair<int,int> > >pq;
	pq.push(make_pair(0,0));
	while(!pq.empty())
	{

		int u = pq.top().second;
		pq.pop();
		//cout<<"Visited = "<<u<<endl;
		vector<pair<int,int> >::iterator it;
		for(it = vec[u].begin(); it != vec[u].end(); it++)
		{
			//cout<<"Adjacent vert = ";
			if(dist[(*it).second] > dist[u] + (*it).first )
			{
				dist[(*it).second] = dist[u] + (*it).first;
				pq.push(make_pair(dist[(*it).second], (*it).second));
			}
		}
//		cout<<endl;
	}
}
int main()
{
     int n,m;
    cin>>n>>m;
    for(int i = 0; i <n; i++)
    {
    	dist[i] = 100000009;
    }
    int src,dest,weight;
   vector<pair<int,int> >vec[n+1];
    for(int i = 0; i < m; i++)
    {
    	cin>>src>>dest>>weight;
    	vec[src].push_back(make_pair(weight,dest));
    	vec[dest].push_back(make_pair(weight,src));
    }
    dijsktra(vec,n,m);
    for(int i = 0; i <n; i++)
    {
    	cout<<dist[i]<<" ";
    }
    cout<<endl;
    return 0;
}


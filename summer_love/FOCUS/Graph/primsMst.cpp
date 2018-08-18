#include<bits/stdc++.h>
using namespace std;
int findmin(int dist[], bool visited[],int n)
{
	int min_ind = 1;
	int min_val = dist[1];
	for(int i = 1; i <= n; i++)
	{
		if((min_val < dist[i]) &&(!visited[i]))
		{
			min_val = dist[i];
			min_ind = i;
		}
	}

	return min_ind;
}
int main()
{
	int n;
	cin>>n;
	int e;
	cin>>e;
	vector<pair<int,int> >adj[n+1];//It is an adjacency list
	int src,dest,wt;
	for(int i = 0; i < e; i++)
	{
		cin>>src>>dest>>wt;
		adj[src].push_back(make_pair(wt,dest));
		adj[dest].push_back(make_pair(wt,src));
	}

	bool visited[n+1];
	int dist[n+1];

	for(int i = 0; i <= n; i++)
	{
		visited[i] = false;
		dist[i] = INT_MAX;
	}

	int ctr = 0;

	dist[1] = 0;

	while(ctr < n)
	{
		int u = findmin(dist,visited,n);
		cout<<"Vertex selected = "<<u<<endl;
		visited[u] = true;
		ctr++;
		vector<pair<int,int> >::iterator it;
		for(it = adj[u].begin(); it != adj[u].end(); it++)
		{
			if(dist[(*it).second] > (*it).first)
				dist[(*it).second] = (*it).first;
		}

	}

	int sum = 0;
	for(int i = 1; i <= n; i++)
	{
		sum = dist[i]+sum;
	}

	cout<<sum<<endl;//SUM of MST edges

	return 0;
}

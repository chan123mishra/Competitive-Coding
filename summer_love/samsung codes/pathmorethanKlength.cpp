#include<bits/stdc++.h>
using namespace std;
int adj[100][100];
int path[100];
int visited[100];


void printpath(int pat)
{
	cout<<"Path for more than k steps :-"<<endl;
	for(int i = 0; i < pat; i++)
	{
		cout<<path[i]<<" ";
	}
	cout<<endl;
}
bool pathexists(int pos,int* pat,int n, int* cur_ht, int k)
{

		visited[pos] = 1;
		path[*pat] = pos;
		(*pat)++;
		if(*cur_ht >= k)
		return true;
	for(int i = 0; i < n; i++)
	{
		if(adj[pos][i] && !visited[i])
		{
			(*cur_ht) = (*cur_ht) + adj[pos][i];
			if(pathexists(i,pat,n,cur_ht,k))
				return true;
			(*cur_ht) = (*cur_ht) - adj[pos][i];
		}
	}
	visited[pos] = 0;
	path[*pat] = -1;
	(*pat)--;
	return false;
}
void pathmorethanK(int n, int k)
{
	int cur_ht = 0;
	int pat = 0;
	if(pathexists(0,&pat,n,&cur_ht,k))
		printpath(pat);
	else
		cout<<"Path doesnt exist"<<endl;
}
int main()
{
	int n, m;
	cin>>n>>m;
	for(int i = 0; i < n; i++)
	{
		visited[i] = 0;
		path[i] = -1;
		for(int j = 0; j < n; j++)
		{
			adj[i][j] = 0;
		}
	}

	int src,dest,weight;
	for(int i = 0; i < m; i++)
	{
		cin>>src>>dest>>weight;
		adj[src][dest] = weight;
		adj[dest][src] = weight;
	}
	int k;
	cin>>k;
	pathmorethanK(n,k);
	return 0;
}

/*
20
11 1
1 2
13 3
15 4
17 5
11 6
2 7
1 8
15 9
4 10
15 12
5 13
2 14
17 15
15 16
11 17
15 18
9 19
16 20
*/
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int visited[100005];
void printedge(list<int>adj[],int n)
{
	list<int>::iterator it;
	for(int i = 1; i <= n; i++)
	{
		cout<<"\nSrc = "<<i<<" :-\n";
		cout<<"Dest = \t";
		for(it = adj[i].begin(); it != adj[i].end(); it++)
		{
			cout<<*it<<", ";
		}
	}
}
int countNode(list<int>adj[],int src, int x)
{
	visited[src] = 1;
	queue<int>q;
	q.push(src);
	//q.push(-1);
	int level = 1;
	bool flag = false;
	int nodectr = 1;
	while(!q.empty())
	{




		if(nodectr == 0)
		{
			level++;
			nodectr = q.size();
		}
		if(level == x)
			return q.size();
		int u = q.front();
		visited[u] = 1;
		q.pop();

		list<int>::iterator it;
		for(it = adj[u].begin(); it != adj[u].end(); it++)
		{

			if(!visited[*it])
				q.push(*it);

		}
	nodectr--;
	}
	return 0;
}
int main()
{
   int n;
   cin>>n;
   for(int i = 0; i < n; i++)
   {
		visited[i] = 0;
   }
   list<int>adj[n+1];
   int src,dest;
   for(int i = 1; i <= n-1; i++)
   {
   		cin>>src>>dest;
   		adj[src].push_back(dest);
   		adj[dest].push_back(src);
   }
   //printedge(adj,n);
   int x;
   cin>>x;
   int res = countNode(adj,1,x);
   cout<<res<<endl;
   return 0;
}

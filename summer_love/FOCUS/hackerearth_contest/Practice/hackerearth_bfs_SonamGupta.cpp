#include <iostream>
#include<bits/stdc++.h>
using namespace std;
bool possiblePath(int s, int d, int *steps,int curpos)
{
	if(curpos == d)
	{
		return true;
	}
	bool visited[30000];
	memset(visited,false,sizeof(visited));
	queue<int>q;
	q.push(curpos);
	visited[curpos] = true;
	int parent[30000];
	parent[curpos] = curpos;

	while(!q.empty())
	{
		int u = q.front();
		cout<<"Cur_Pos = "<< u <<endl;
		q.pop();

		if(u == d)
		{
			int par = d;
			int ctr = 0;
			cout<<"How we got our answer"<<endl;
			while(parent[par] != par)
			{
				cout<<"cur val = "<<par<<endl;
				par = parent[par];

				ctr++;
			}
			(*steps) = ctr;
			return true;
		}
		else
		{
			if(u <= d)
			{


			if(!visited[2*u])
			{
				q.push(2*u);
				parent[2*u] = u;
				visited[2*u] = true;
			}
			if((u-1)>0 && !visited[u-1])
			{
				q.push(u-1);
				parent[u-1] = u;
				visited[u-1] = true;
			}
			(*steps)++;

			}
			else
			{
				if((u-1)>0 && !visited[u-1])
			{
				q.push(u-1);
				parent[u-1] = u;
				visited[u-1] = true;
			}
			(*steps)++;
			}
		}


	}

	return false;
}
int main()
{

	int t;
	cin>>t;
	for(int i = 0; i < t; i++)
	{
		int src,dest;
		cin>>src>>dest;
		int steps = 0;
		if(possiblePath(src,dest,&steps,src))
		{
			cout<<steps<<endl;
		}
		else
		{
			cout<<"can't reach"<<endl;
		}

	}

	return 0;
}

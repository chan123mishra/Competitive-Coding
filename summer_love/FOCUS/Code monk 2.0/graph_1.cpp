#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,k;
    cin>>n>>m>>k;
    int val[n+1];
    for(int i = 1; i <= n; i++)
        cin>>val[i];

vector<int>adj[n];
int src,dest;
for(int i = 0; i < m; i++)
{
    cin>>src>>dest;
    adj[src].push_back(dest);
}

for(int i = 1; i <= n; i++)
{
	for(int j = 0; j < adj[i].size(); j++)
	{
		cout<<adj[i][j]<<" ";
	}
	cout<<endl;
    //sort(adj[i].begin(),adj[i].end());
    //cout<<adj[i][k-1];
}


    return 0;
}

#include<bits/stdc++.h>
using namespace std;
//int a[100][5];
#define R 20
#define C 6

int dfs(int a[R][C],int n,int x, int y, bool flag,int scr, int bS, int bE)
{

	if(y > 5)
	{
		return 0;
	}
	if(x < 0)
	{
		if(scr < 0)
			return -1;
		else
			return scr;
	}
	if(flag)
	{
		if(a[x][y] == 2)
		{
			if(x >= bS && x <= bE)
			{
				scr = scr + 0;
			}
			else
			{
				scr = scr - 1;
			}

		}
		else
			scr = scr + a[x][y] ;

		return scr + max(dfs(a,n,x-1,y,flag,scr,bS,bE),max(dfs(a,n,x-1,y-1,flag,scr,bS,bE),dfs(a,n,x-1,y+1,flag,scr,bS,bE)));
	}
	else
	{
		if(x!=n)
		{


		if(a[x][y] == 2)
		{
				scr = scr - 1;
		}
		else
			scr = scr + a[x][y];
		}
		return scr + max(dfs(a,n,x-1,y,!flag,scr,x,x+5),max(dfs(a,n,x-1,y-1,!flag,scr,x,x+5),max(dfs(a,n,x-1,y+1,!flag,scr,x,x+5),max(dfs(a,n,x-1,y,flag,scr,bS,bE),max(dfs(a,n,x-1,y-1,flag,scr,bS,bE),dfs(a,n,x-1,y+1,flag,scr,bS,bE))))));

	}
}
int fnc(int a[R][C],int n)
{
	bool flag = false;
	return dfs(a,n,n,2,flag,0,-1,-1);
}
int main()
{
	int n;
	cin>>n;
	int a[R][C];
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < 5; j++)
		{

			cin>>a[i][j];
			if(a[i][j] == -1)
			{

				a[i][j] = 2;
			}
		}
	}

	int res = fnc(a,n);
	cout<<res<<endl;
}

/*
12
0 1 1 0 0
0 -1 0 1 -1
1 0 -1 -1 0
0 0 0 1 1
0 -1 -1 0 1
1 1 1 0 0
1 0 0 1 0
0 0 -1 -1 0
1 -1 1 1 0
0 0 -1 0 0
1 0 -1 -1 0
0 0 0 0 0

*/

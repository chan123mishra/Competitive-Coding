#include<bits/stdc++.h>
using namespace std;
int sol[10][10];
bool issafe(int m, int n, int r)
{
	for(int i = 0; i < r; i++)
	{
		if(sol[m][i] == 1 && (i != n))
			return false;
	}
	for(int i = 0; i < r; i++)
	{
		if(sol[i][n] == 1 && (i != m))
			return false;
	}
	
	for(int i = 0; i < r; i++)
	{
		for(int j = 0; j < r; j++ )
		{
			if(i != m && j != n && ((i - j)== (m - n)) && (sol[i][j] == 1))
			{
				return false;
			}
			else if(i != m && j != n && ((i+j) == (m+n)) && (sol[i][j] == 1))
			{
				return false;
			}
		}
	}
            
    return true;
	
}


void printsol(int m)
{
	for(int i = 0; i < m; i++)
	{
		for(int j = 0; j < m; j++)
		{
			cout<<sol[i][j]<<" ";
		}
		cout<<endl;	
	}	
}
bool solveNqueen(int m,int cur)
{
	if(cur >= m)
		{
			return true;
		}
	

	
	
		for(int j = 0; j < m; j++)
		{
			if(issafe(cur,j,m))
			{
				//cout<<"Safe , i = "<<cur<<" , j = "<<j<<endl;
				sol[cur][j] = 1;
				if(solveNqueen(m,cur+1))
					return true;
					
				sol[cur][j] = 0;	
			}
		}
		
		//cout<<"cur = "<<cur<<" , false val"<<endl;	
		return false;
		
}
int main()
{
	int m;
	cin>>m;
	for(int i = 0; i < m; i++)
	{
		for(int j = 0; j < m; j++)
		{
			sol[i][j] = 0;
		}
	}
	if(solveNqueen(m,0))
		printsol(m);
	else
	cout<<"Not possible"<<endl;
	return 0;
}

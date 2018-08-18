#include<bits/stdc++.h>
using namespace std;
string dictionary[] = {"I","am","an","Indian"};
char boggle[10][10];
int visited[10][10];

bool findwords(string str)
{
    for(int i = 0; i < sizeof(dictionary)/sizeof(dictionary[0]); i++)
    {
        if(dictionary[i].compare(str) == 0)
        {
            dictionary[i] = "";
            return true;
        }
    }
    return false;
}

bool issafe(int i, int j, int m, int n)
{
    if(!visited[i][j] && i >= 0 && i < m && j >= 0 && j < n)
        return true;

    return false;
}
void dfs(int i, int j, string str, int m, int n)
{
    visited[i][j] = 1;
    str = str + boggle[i][j];
    if(findwords(str))
    {
        cout<<str<<endl;
    }
    if(issafe(i,j+1,m,n))
    {
        dfs(i,j+1,str, m, n);
    }
    if(issafe(i+1,j,m,n))
    {
        dfs(i+1,j,str, m , n);
    }
    if(issafe(i+1,j+1,m,n))
    {
        dfs(i+1,j+1,str, m , n);
    }
    if(issafe(i+1,j-1,m,n))
    {
        dfs(i+1,j-1,str, m , n);
    }
    if(issafe(i,j-1,m,n))
    {
        dfs(i,j-1,str, m ,n);
    }
    if(issafe(i-1,j-1,m,n))
    {
        dfs(i-1,j-1,str, m , n);
    }
    if(issafe(i-1,j,m,n))
    {
        dfs(i-1,j,str, m , n);
    }
    if(issafe(i-1,j+1,m,n))
    {
        dfs(i-1,j+1,str, m ,n);
    }

    str.erase(str.length() - 1);
    visited[i][j] = 0;
}
int main()
{
    int m,n;
    cin>>m>>n;
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cin>>boggle[i][j];
        }
    }

    memset(visited,0,sizeof(visited[0][0])*m*n);
    string str = "";

    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(!visited[i][j])
            {
                dfs(i,j,str,m,n);
            }
        }
    }

    return 0;
}

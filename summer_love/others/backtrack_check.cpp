#include<bits/stdc++.h>
using namespace std;
int a[20][20];
int sol[20][20];
int ctr = 0;
void printpath(int n)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cout<<sol[i][j]<<" ";
        }
        cout<<endl;
    }
}
bool issafe(int x, int y, int n)
{
    if(x >= 0 && x < n && y >= 0 && y < n && a[x][y] == 1)
        return true;
    else
        return false;
}
/*
5
1 1 0 0 0
1 0 0 1 0
1 1 1 0 0
1 0 1 1 1
1 0 0 0 1
*/
bool traverse(int n, int x, int y)
{
    if(x == n - 1 && y == n - 1)
    {
        sol[x][y] = 1;
        ctr++;
        return true;
    }

    if(issafe(x,y,n))
    {
        sol[x][y] = 1;
        ctr++;
        if(traverse(n,x+1,y))
            return true;
        if(traverse(n,x,y+1))
            return true;
        sol[x][y] = 0;
        return false;
        ctr = ctr - 2;
    }
    return false;
}
void fnc(int n)
{
    if(traverse(n,0,0))
    {
        printpath(n);
        return ;
    }
    cout<<"traversal not possible\n";
}
int main()
{
    int n;
    cin>>n;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cin>>a[i][j];
        }
    }
    fnc(n);
    cout<<endl;
    cout<<ctr<<endl;
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
bool isSafe(int *mat, int x,int y , int m , int n)
{
    if(x >= 0 && y >= 0 && x <= m - 1 && y <= n-1 && mat[x][y] == 1))
    {
        return 1;
    }
    return 0;
}
bool maizeutil(int *mat, int n, int m, int *sol)
{
    int x = 0;
    int y = 0;
    if( x == n - 1 && y == m - 1)
    {
        sol[x][y] =1;
        return true;
    }

    if(isSafe(int *mat,x,y,n,n) == true)
    {
        sol[x][y] = 1;

    if(isSafe(int *mat, x + 1, y, n,n) == true)
        return true;
    if(isSafe(int *mat, x , y + 1,n,n) == true)
        return true;

        sol[x][y] = 0;
        return false;
    }
    return false;
}
void solvemaize(int *a, int n, int m)
{
    int sol[n][m] = {0};
    if(!maizeutil(int *a,  m,  n,int *sol))
        cout<<"Not possible to travel on this path"<<endl;

    cout<<"The output path is demonstrated by this matrix"<<endl;
    print(sol);
}
int main()
{
    int n;
    cin>>n;
    int a[n][n];
    for(int i = 0;  i < n; i++)
    {
        for(int j = 0; j < n ; j++)
        {
                cin>>a[i][j];
        }
    }

    solvemaize((int *)a, n,n);
    return 0;
}

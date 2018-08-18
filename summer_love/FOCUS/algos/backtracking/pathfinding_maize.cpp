#include<bits/stdc++.h>
using namespace std;
int m[100][100];
int sol[100][100];
bool safe(int x,int y, int n)
{
    if(x >= 0 && x < n && y >= 0 && y < n && m[x][y] == 1)
        return true;
    else
        return false;
}

void displayresult(int n)
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

bool maizeutil(int x, int y, int n)
{
    if(x == n -1 && y == n - 1 )
    {
        sol[x][y] = 1;
        return true;
    }

    if(safe(x,y,n) == true)
    {
        sol[x][y] = 1;

        if(maizeutil(x + 1, y,n) == true)
            return true;

        if(maizeutil(x,y+1,n) == true)
            return true;

       // if(maizeutil(x+1,y+1,n) == true)
          //  return true;

        //if(maizeutil(x-1,y+1,n)== true)
           // return true;

        //if(maizeutil(x+1,y-1,n)==true)
           // return true;

        if(maizeutil(x,y-1,n) == true)
            return true;

        if(maizeutil(x-1,y,n) == true)
            return true;

        //if(maizeutil(x-1,y-1,n))
        sol[x][y] = 0;//Backtracking
        return false;
    }

    return false;
}
void solvemaize(int n)
{
    if(maizeutil(0,0,n))
    {
        cout<<"\nResultant path matrix would be :-"<<endl;
        displayresult(n);
    }

    else
        cout<<"\nNo path possible"<<endl;
}
int main()
{
    int n;
    cin>>n;
    //memset(sol,0,sizeof(sol[0][0])*n*n);

    for(int i = 0; i <  n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cin>>m[i][j];
            sol[i][j] = 0;
        }
    }

    solvemaize(n);
    return 0;
}

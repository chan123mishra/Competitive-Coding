#include<bits/stdc++.h>
using namespace std;
#define R 13
#define C 5
bool issafe(int x, int y, int row, int col)
{
    if(x <= row && x >= 0 && y < 5 && y >= 0)
    {
        return true;
    }
    return false;
}
int dfs(bool bomb,int mat[R][C],int row, int col,int x,int y,int bs,int be,int cur)
{
    if(!issafe(x,y,row,col))
        return INT_MIN;


    if(x == row)
    {
        if(!bomb)
        {
            if(mat[x][y] == 2)
                return cur;
            else
                return cur+mat[x][y];
        }
        else
            {
                if(x <= be)
                {
                    if(mat[x][y] == 2)
                        return cur;
                }
                else{
                        if(mat[x][y] == 2)
                        return cur = cur -1;
                        else
                        return cur+mat[x][y];
                    }
        }
    }
    else
    {
        if(bomb)
        {
                if(x <= be)
                {
                    if(mat[x][y] == 2)
                        {

                        }
                        else
                            cur += mat[x][y];
                }
                else
                {
                    if(mat[x][y] == 2)
                         cur = cur -1;
                        else
                        cur = cur+mat[x][y];
                }


                return max(dfs(true,mat,row,col,x+1,y,bs,be,cur),max(dfs(true,mat,row,col,x+1,y+1,bs,be,cur),dfs(true,mat,row,col,x+1,y-1,bs,be,cur)));
        }
        else
        {
            int res = INT_MIN;
            int cur1,cur2;
            cur1 = cur;
            cur2 = cur;
            if(mat[x][y] == 2)
            {
                cur1 = cur1;
            }
            else
            {
                cur1 = cur1 + mat[x][y];
            }
            res = max(res,max(dfs(true,mat,row,col,x+1,y,x,x+4,cur1),max(dfs(true,mat,row,col,x+1,y+1,x,x+4,cur1),dfs(true,mat,row,col,x+1,y-1,x,x+4,cur1))));
            if(mat[x][y] == 2)
            {
                cur2 = cur2 - 1;
            }
            else
                cur2 = cur2 + mat[x][y];

            return max(res,max(dfs(false,mat,row,col,x+1,y,bs,be,cur2),max(dfs(false,mat,row,col,x+1,y+1,bs,be,cur2),dfs(false,mat,row,col,x+1,y-1,bs,be,cur2))));
        }
    }

}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int mat[n+1][5];
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < 5; j++)
            {
                cin>>mat[i][j];
            }
        }
        int res = max(dfs(false,mat,n,5,1,2,-1,-1,0),dfs(true,mat,n,5,1,2,0,4,0));
        res = max(res,max(dfs(false,mat,n,5,1,1,-1,-1,0),dfs(true,mat,n,5,1,1,1,5,0)));
        res = max(res,max(dfs(false,mat,n,5,1,3,-1,-1,0),dfs(true,mat,n,5,1,1,3,5,0)));
        cout<<res<<endl;
    }
}

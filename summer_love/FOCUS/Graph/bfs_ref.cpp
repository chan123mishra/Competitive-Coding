#include<bits/stdc++.h>
using namespace std;
void bfs(vector< vector<int> >v, int n)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cout<<v[i][j]<<" ";
        }
        cout<<"\n";
    }

    queue <int> q;
    int color[n];

}
int main()
{
    vector< vector<int> >vec;
    int v;
    cin>>v;
    int i,j;
    int a;
    for(i = 0; i < v; i++)
    {
        vector<int>push;
        for(j = 0; j < v; j++)
        {
            a = 0;
          push.push_back(a);
        }
        vec.push_back(push);
    }
    int src,des;
    while(true)
    {
        cin>>src;
        cin>>des;
        if(src == -1 || des == -1)
        {
            break;
        }
        vec[src - 1][des - 1] =1;
    }
    for(int i = 0; i < v; i++)
    {
        for(int j = 0; j < v; j++)
        {
            cout<<vec[i][j]<<" ";
        }
        cout<<"\n";
    }
   // bfs(vec,v);
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int a[100][100];
int main()
{
    int n;
    cin>>n;
    int src;
    int dest;
    for(int i = 0; i < n; i++)
    {
        for(int j  = 0; j < n; j++)
        {
            a[i][j] = 0;
        }
    }
    cout<<"Enter the edges"<<endl;
    cin>>src;
    cin>>dest;
    int num = 1;
    //a[src][dest] = 1;
    while(src == - 1 || dest == -1)
    {
        a[src][dest] = 1;
        num++;

        cin>>src;
        cin>>dest;
    }
    int s = 0;
    int visited[n];
    for(int i = 0; i < n; i++)
        visited[i] = 0;

        visited[s] = 1;
        cout<<s<<endl;
    for(int i = 0; i < n; i++)
    {
        if(a[s][i] == 1 && visited[i] != 1)
        {
            visited[i] = 1;
            cout<<i<<endl;
            s = i;

        }
    }

}

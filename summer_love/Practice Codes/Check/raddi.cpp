#include<iostream>
#include<map>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, m ,q;
    cin>>n>>m>>q;
    int road[n+1][n+1];
    int p[n];
    for(int i = 0; i <n; i++)
        cin>>p[i];


    for(int i=0; i<n+1;i++)
    {
        for(int j =0; i < n+1; j++)
        {
            road[i][j] = 0;
        }
    }
    int src;
    int dest;
    for(int i = 0; i < m; i++)
    {
        cin>>src>>dest;
        road[src][dest] = 1;
        road[dest][src = 1;
    }

    for(int i = 0; i < q ; i++)
    {
        char ch;
        cin>>ch;
        if(ch == 'P')
        {
        int ind;
        int pop;
        cin>>ind;
        cin>>pop;
    }
return 0;
}

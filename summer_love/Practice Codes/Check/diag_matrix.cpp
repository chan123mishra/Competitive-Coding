#include<bits/stdc++.h>
using namespace std;
int main()
{
int a[3][3];
for(int i = 0; i < 3; i ++)
{
for(int j = 0 ; j < 3; j++)
{
cin>>a[i][j];
}
}
cout<<"\nColumn wise  display\n";
for(int i = 0; i < 3; i ++)
{
for(int j = 0 ; j < 3; j++)
{
cout<<a[j][i]<<" ";
}
cout<<"\n";
}
cout<<"\nmain diagonal1\n";
for(int i = 0; i < 3; i ++)
{
for(int j = 0 ; j < 3; j++)
{
if(i == j )
cout<<a[i][j]<<" ";
}
}
cout<<"\nmain diagonal2\n";
for(int i = 0; i < 3; i ++)
{
for(int j = 0 ; j < 3; j++)
{
if(j == 3 - i - 1)
cout<<a[i][j]<<" ";
}
}

return 0;
}

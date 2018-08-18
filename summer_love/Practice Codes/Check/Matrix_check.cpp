#include<iostream>
using namespace std;
int main()
{
int a[2][2],b[2][3];
for(int i = 0; i < 2; i++)
{
for(int j = 0; j < 2; j++)
{
cin>>a[i][j];
}
}
for(int i = 0; i < 2; i++)
{
for(int j = 0; j < 3; j++)
{
cin>>b[i][j];
}
}
int i, j;
int c[2][3];
for( i = 0; i < 2; i++)
{
for( j = 0; j < 3; j++)
{
    c[i][j] = 0;
    for(int k = 0; k < 2; k++){
c[i][j] += a[i][k] * b[k][i];
}
}
}
for( i = 0; i < 2; i++)
{
for( j = 0; j < 3; j++)
{

cout<<c[i][j];
}
cout<<endl;
}
return 0;
}

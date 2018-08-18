#include<iostream>
using namespace std;
int main()
{
int a[10000];
int t;
int i;
cin>>t;
for(i = 0 ; i < t; i++)
{
cin>>a[i];
}
int b[10000];

for(i = 0; i < t; i++)
{
b[i]= a[i] *(a[i] + 1) / 2 ;
}
for(i = 0; i < t; i++)
{
cout<<b[i]<<"\n";
}
return 0;
}

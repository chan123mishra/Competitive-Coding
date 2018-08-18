#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
int n, k ,c=0;
long int m;
scanf("%d %d", &n,&k);
for(int i = 0; i < n ; i++)
{
scanf("%ld", &m);
if((m % k) == 0)
{
    c++;
}

   }
   cout<<c;
   return 0;
   }

#include<bits/stdc++.h>
using namespace std;
long long int fact(long long int );
int main()
{
long long int n;
int t;
int i;
scanf("%d",&t);
long long int s;
for(i = 0; i < t; i++)
{
scanf("%lld",&n);
s =fact(n);
printf("%lld\n", s);
}
return 0;
}
long long int fact(long long int n)
{
long long int z,s;
z=n/5;
if(z == 0)
return z ;
s = z + fact(z);
return s;

}

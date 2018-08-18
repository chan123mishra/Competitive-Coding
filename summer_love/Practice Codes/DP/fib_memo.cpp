#include<bits/stdc++.h>
using namespace std;
int fib(int n)
{
int lookup[1000];
memset(lookup,-1,1000);
if(lookup[n] == -1)
{
if(n <= 1)
{
lookup[n] = n;
}
else
lookup[n] = fib(n -1) + fib(n - 2);
}
return lookup[n];
}
int main()
{
int n;
cin>>n;
cout<<endl;
int i;
for(i = 0; i < n; i++)
cout<<fib(i)<<endl;
return 0;
}

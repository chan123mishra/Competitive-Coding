#include<bits/stdc++.h>
using namespace std;
int main()
{

int a,b;
int temp = 0;
a = 0;
b = 1;
int n;
cin >> n;
cout<<a<<" "<<b<<" ";
while((a+b)<=n)
{
temp = a + b;
cout<<temp<<" ";
a = b;
b = temp;
}
return 0;
}

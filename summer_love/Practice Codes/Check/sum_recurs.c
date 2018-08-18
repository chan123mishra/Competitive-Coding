#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;
int sum(int n)
{
if( n = 1)
return;

int s = n;
s = s + sum(n - 1);
return s;
}
int main()
{
int n;
cin>>n;
cout<<sum(n);
return 0;
}

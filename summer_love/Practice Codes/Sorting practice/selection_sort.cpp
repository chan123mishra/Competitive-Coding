#include<iostream>
using namespace std;
int main()
{
int n;
cout<<"Enter no. of element in array \n";
cin>>n;
int a[n];
cout<<"Enter the elements in array \n";
int i,j;
int min,temp;
for(int i = 0; i < n ; i++)
{
cin>>a[i];
}
for(i = 0 ; i < n - 1 ; i++)
{
min = i;
for( j= i + 1 ; j < n ; j++)
{
if(a[j]< a[min])
{
min = j;
}
}
if( i != min)
{
temp = a[min];
a[min] = a[i];
a[i] = temp;
}
}
cout<<"SOrted list after selection sort is :- \n";
for(int i = 0; i < n ; i++)
{
cout<<a[i] <<"  ";
}
return 0;
}

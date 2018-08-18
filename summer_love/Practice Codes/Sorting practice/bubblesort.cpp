#include<iostream>
using namespace std;
int main()
{
int n;
cout<<"Enter no. of elements in array :- \n";
cin>>n;
int a[n];
int i,j;
cout<<"Enter elements of array :- \n";
for( i= 0; i< n; i++)
{
cin>>a[i];
}
int temp;

for(i = 0; i< n-1; i++)
{
 int xchanges = 0;
 for(j = 0 ; j < n - i - 1 ; j++)
 {
 if(a[j] > a[j + 1])
 {
 temp = a[j + 1];
 a[j + 1]= a[j];
 a[j] = temp;
 xchanges++;
 }
 }
 if(xchanges == 0)
 {
break;
 }
 }
 cout<<"Sorted list is :- \n";
 for( i= 0; i< n; i++)
{
cout<<a[i]<<"  ";
}
return 0;

 }

#include<bits/stdc++.h>
using namespace std;
void printar(int a[], int n)
{
if(n == 1)
{
cout<<a[n -1]<<" ";
return;
}
printar(a,n - 1);
cout<<a[n -1]<<" ";

}
void printrev(int a[], int n)
{

if(n == 0)
{
return;
}
cout<<a[n -1]<<" ";
n = n - 1;
printrev(a,n);
}
int main()
{
int a[] = {1,2,3,5,6,7};
printar(a,6);
cout<<endl;
printrev(a,6);
return 0;
}

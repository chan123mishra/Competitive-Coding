#include<iostream>
#include<cstdlib>

using namespace std;
void print(int [] , int );
int main()
{
int i;
int a[100];
int j = 0 ;
while(1)
{
cin>>i;
a[j++] = i;
if(i == 42)
{
    print(a , j);
    break;
}
}

return 0;
}
void print(int a[] , int j)
{

    for(int i = 0; i < j ; i++)
    {
        cout<<a[i]<<"\n";

    }
}

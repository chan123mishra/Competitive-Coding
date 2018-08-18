#include<bits/stdc++.h>
using namespace std;
int surch(int [], int , int , int );
int main()
{

    int mid, i,j;
    int n;
    cout<<"Enter no. of elements in array \n";
    cin>>n;
    int a[n];
    mid = ( n - 1) / 2;

    cout<<"Enter the sorted array \n";
    for( i = 0; i < n ; i++)
        cin>>a[i];

    cout<<"Enter the elements to be searched \n";
    cin>>j;
  int s = 0;
    if(j >= a[mid])
    {
         s = surch(a,mid,n,j);

    }
    else{
        s =surch(a,0,(mid-1), j);
    }
    if(s == 1)
        cout<<"No. has been searched\n";
    else
        cout<<"No. hasn't been found \n";


    return 0;
}

int surch(int a[], int n, int m , int j)
{
    for( int i = n ; i < m ;i++)
    {
        if(a[i] == j)
        {
            return 1;
            break;
        }
    }

}

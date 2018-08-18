#include<bits/stdc++.h>
using namespace std;
void search_ele(int a[],int j,int l, int h);
int main()
{
    int i,j;
    int n;
    cout<<"Enter no. of elements in array \n";
    cin>>n;
    int a[n];
    cout<<"Enter the sorted array \n";
    for( i = 0; i < n ; i++)
        cin>>a[i];

    cout<<"Enter the elements to be searched \n";
    cin>>j;

    search_ele(a,j,0,n-1);
    return 0;
}

void search_ele(int a[],int j,int l, int h)
{
    int mid = (l + h) / 2;
    if(a[mid] == j)
    {
        cout<<"Element "<<j<<" has been searched at location "<<mid<<" in the array\n";
        return ;
    }
    else if(j < a[mid])
    {
        search_ele(a,j,l,mid);
    }
    else{
        search_ele(a,j,(mid + 1),h);
    }
}

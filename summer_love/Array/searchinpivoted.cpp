#include<bits/stdc++.h>
using namespace std;
void binarysearch(int a[], int l, int h, int key)
{
    if(l > h)
    {
        cout<<"Not found\n";
    }

    int m = (l + h)/2;
    if(a[m] == key)
    {
        cout<<m<<endl;
        return;
    }
    if(key < a[m])
        binarysearch(a,l,m,key);

    else
        binarysearch(a,m+1,h,key);
}
int findpivot(int a[], int l, int h, int n)
{
    if(l > h)
        return -1;
   // if(l == h)
     //   return l;

    int mid = (l + h)/2;

    if((mid - 1) >= 0 && a[mid - 1] < a[mid] && (mid + 1)<n && a[mid] > a[mid+1])
        return mid;

    if(a[l] <= a[mid])
    {
        findpivot(a,mid+1,h,n);
    }
    else
        findpivot(a,l,mid,n);
}
void fnc(int a[], int n, int key)
{
    int piv = findpivot(a,0,n-1,n);
    if(piv == -1)
    {
        binarysearch(a,0,n-1,key);
    }
    else if(a[piv] == key)
    {
        cout<<piv<<endl;
    }
    else if(key >= a[0])
    {
        binarysearch(a,0,piv - 1,key);
    }
    else
    {
     binarysearch(a,piv+1,n-1,key);
    }
   // cout<<piv<<endl;
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i = 0; i < n; i++)
        cin>>a[i];

    int key;
    cin>>key;

    fnc(a,n,key);
    return 0;
}

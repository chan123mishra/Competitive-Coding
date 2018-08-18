#include<bits/stdc++.h>
using namespace std;

void merge(int a[],int l, int m, int h);
void mergesort(int a[],int l, int h)
{
    int m;

    if(l < h)
    {
        m = (l + h) / 2;
        mergesort(a,l,m);
        mergesort(a,m+1,h);
        merge(a,l,m,h);
    }
}

void merge(int a[],int l, int m, int h)
{
    int b[100];
    memset(b,0,100);
    //int n1 , n2;
   // n1 = m - l + 1;
    //n2 = h- m;

    int i = l;
    int j = m + 1;
    int k = 0;

    while(i <= m && j<=h)
    {
        if(a[i] < a[j])
        {
            b[k++] = a[i++];
        }
        else
        {
            b[k++] = a[j++];
        }
    }

    while(i <=m)
    {
        b[k++] = a[i++];
    }
    while(j <= h)
    {
        b[k++] = a[j++];
    }
    for( i = 0,j=l; j<=h; i++,j++)
    {
        a[j]=b[i];
    }
}

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i = 0; i < n; i++)
        cin>>a[i];

    mergesort(a,0,(n - 1));
    for(int i=0;i<n;i++)
    cout<<a[i]<<" ";
    return 0;
}

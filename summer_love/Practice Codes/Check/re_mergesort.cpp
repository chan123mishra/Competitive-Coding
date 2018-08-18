#include<bits/stdc++.h>
using namespace std;
void mergefnc(int a[],int l,int m,int r)
{
    int n1,n2;
    n1 = m - l + 1;
    n2 = r - m;

}
void merge_sort(int a[], int l, int r)
{
    int m;
    if(l < r)
    {
        m = (l+r)/2;
        merge_sort(a,l,m);
        merge_sort(a,m+1,r);
        mergefnc(a,l,m,r);
    }
}
int main()
{

    int n;
    cin>>n;
    int a[n];

    for(int i = 0; i < n; i++)
        cin>>a[i];

    merge_sort(a,0,n-1);
    return 0;
}

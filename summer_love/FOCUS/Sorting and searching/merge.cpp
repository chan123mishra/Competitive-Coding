#include<bits/stdc++.h>
using namespace std;
void mergefn(int a[], int p, int q, int r)
{
    int n1,n2;
    n1 = q - p + 1 ;
    n2 = r - q  ;
    int left[n1+1];
    int right[n2+1];
    left[n1] = INT_MAX;
    right[n2] = INT_MAX;

    int k = 0;
    for(int i = p; i <= q; i++)
    {
        left[k++] = a[i];
    }

    k = 0;
    for(int i = q+1; i <= r; i++)
    {

        right[k++] = a[i];
    }
    int i = 0;
    int j = 0;
    k = 0;
    for(k = p; k <= r;k++)
    {
        if(left[i] <= right[j])
            a[k] = left[i++];

        else
            a[k] = right[j++];
    }
}
void merge_sort(int a[], int p, int r)
{
    if(p < r)
    {
        int q = (p + r )/2;
        merge_sort(a,p,q);
        merge_sort(a,q+1,r);
        mergefn(a,p,q,r);
    }
}
int main()
{

    int n;
    cin>>n;
    int a[n];
    for(int i = 0; i < n; i++)
    {
        cin>>a[i];
    }

    //sort(a,a+n);
    cout<<"\nArray before sorting\n";
    for(int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }

    merge_sort(a,0,n-1);

    cout<<"\nArray after sorting\n";
    for(int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }

    return 0;

}

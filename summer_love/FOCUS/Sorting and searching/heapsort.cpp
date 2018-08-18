#include<bits/stdc++.h>
using namespace std;
void percolateDown(int a[], int i, int s)
{
    int l = 2*i + 1;
    int r = 2*i + 2;
    int mx = i;
    if(a[l] > a[i] && l <= s)
    {
        mx = l;
    }

    if(a[r] > a[mx] && r <= s)
    {
        mx = r;
    }

    if(mx != i)
    {
        swap(a[i],a[mx]);
        percolateDown(a,mx,s);
    }
}

void percolateUp(int a[], int i, int s)
{
    int p = (i - 1)/2;
    if(a[p] < a[i] && p>= 0)
    {
        swap(a[i],a[p]);
        percolateUp(a,p,s);

    }
}
void addheap(int a[], int data, int *s)
{
    (*s) = (*s)+1;
    a[*s] = data;

    percolateUp(a,*s,*s);
}
void heapsort(int a[] ,int n, int s)
{
    for(int i = n - 1; i > 0; i--)
    {
       // cout<<a[0]<<" ";
        swap(a[i],a[0]);
        (s) = (s) - 1;
        percolateDown(a,0,s);

    }
}
void heapify(int a[], int n)
{
    for(int i = n/2 - 1; i >= 0; i--)
    {
        percolateDown(a,i,n-1);
    }
}
int main()
{
    int n;
    cin>>n;
    int a[n];

    for(int i = 0; i < n; i++)
        cin>>a[i];

    heapify(a,n);
    cout<<"After max heapify\n";
     for(int i = 0; i < n; i++)
        cout<<a[i]<<" ";
    cout<<endl;

    int s = n - 1;
    int ele;
    cin>>ele;
    addheap(a,ele,&s);
   heapsort(a,s + 1,s);
    cout<<"After sorting\n";
    for(int i = 0; i <= s; i++)
    {
        cout<<a[i]<<" ";
    }

    cout<<endl;
    return 0;
}

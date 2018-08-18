#include<bits/stdc++.h>

using namespace std;
int left(int i)
{
    return (2*i + 1);
}
int right(int i)
{
    return (2*i + 2);
}

int parent(int i)
{
    return (i/2);
}
void maxheap(int a[], int s, int i)
{
    int l,r;
    l = left(i);
    r = right(i);
    int largest;

    if(l < s && a[i] < a[l])
        largest = l;

    else
        largest = i;
     if( r < s && a[largest] < a[r])
        largest = r;

     if(largest != i)
     {
        swap(a[largest],a[i]);
        maxheap(a,s,largest);
     }

}
void makeHeap(int a[], int n)
{
    int heapSize = n;
    for(int i = (n/2) - 1; i >= 0; i--)
        maxheap(a,heapSize,i);
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

    makeHeap(a,n);
    cout<<"\n";
    for(int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }

}

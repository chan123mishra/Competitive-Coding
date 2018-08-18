#include<bits/stdc++.h>
using namespace std;

/* This function takes last element as pivot, places  the pivot element
   at its correct position in sorted  array, and places all smaller (smaller
   than pivot) to left of pivot and all greater elements to right  of pivot */

int partition (int a[], int low, int high)
{
   // Your code here
   int pivot = a[high];
   int pind = low;
   for(int i = low; i < high; i++)
   {
       if(a[i] <= pivot)
       {
           swap(a[i],a[pind]);
           pind++;
       }
   }

   swap(a[high],a[pind]);
   return pind;
}

void quickSort(int arr[], int low, int high) {
    if (low < high)     {
        // pi is partitioning index, arr[p] is now  at right place
        int pi = partition(arr, low, high);

        // Separately sort elements before / partition and after partition
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}


int main()
{
    int n;
    cin>>n;

    int a[n];
    for(int i = 0; i < n; i++)
        cin>>a[i];

    quickSort(a,0,n-1);
    for(int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;

    return 0;
}

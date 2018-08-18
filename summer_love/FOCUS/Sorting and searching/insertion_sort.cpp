#include<bits/stdc++.h>
using namespace std;
void insertion_sort(int a[], int n)
{
    int new_ind,temp;
    for(int i = 1; i <= n - 1; i++)
    {
        temp = a[i];
        new_ind = i;
        for(int j = i - 1; j >= 0; j--)
        {
            if(a[j] > a[new_ind])
            {
                //cout<<"Swap bw "<<a[j]<<" and "<<a[new_ind]<<" occurs"<<endl;
                swap(a[j],a[new_ind]);
                new_ind = j;
            }
        }
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

    insertion_sort(a,n);
    for(int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0;
}

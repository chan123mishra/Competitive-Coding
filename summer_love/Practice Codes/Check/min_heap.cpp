#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i = 0; i < n; i++)
        cin>>a[i];
    for(int i = ((n - 1)/2); i >= 0; i-- )
    {
        if(a[2*i] < a[2*i + 1])
        {
            if(a[2*i + 1] < a[i])
                swap(a[i],a[2*i+1]);
        }
        else
            if(a[2*i] < a[i])
            swap(a[i],a[2*i]);
    }

    for( int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}

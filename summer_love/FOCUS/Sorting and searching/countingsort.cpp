#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i = 0; i < n; i++)
    {
        cin>>a[i];
    }

    int freq[100];
    memset(freq,0,sizeof(freq));
    for(int i = 0; i < n ; i++)
    {
        freq[a[i]]++;
    }

    for(int i = 1; i < 100; i++)
    {
        freq[i] = freq[i - 1] + freq[i];
    }

    int output[n];
    for(int i = 0; i < n; i++)
    {
        output[freq[a[i]] - 1] = a[i];
        --freq[a[i]];
    }

    for(int i = 0; i < n; i++)
    {
        a[i] = output[i];
    }

    cout<<"After sorting\n";
    for(int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0;
}

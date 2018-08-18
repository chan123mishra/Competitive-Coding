#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n + 10];
    for(int i=0; i < n ;i++)
        cin>>a[i];

    int k,key;
    int i, j;
    for( i = 1; i < n; i++)
    {
        key = a[i];
        for(j = i - 1 ;j >= 0 ; j--)
        {
            if(a[j] > key)
            {
                a[j + 1] = a[j];
                a[j] = key;
            }
            }

       }


    for(i = 0; i < n ; i++)
        cout<<a[i]<<" ";

    return 0;
}

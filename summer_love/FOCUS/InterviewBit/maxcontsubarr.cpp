#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[1000];
    int n;
    cin>>n;
    for(int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int k = 0;
    int comp[1000];
    for(int i =0 ; i < n; i++)
        index[i] = 0;
    for(int j = 0; j < n; j++)
    {
        if(a[j] > 0)
        {
            comp[k] = a[j] + comp[k];
        }
        else
        {
        index[k] = j - 1;
        k++;
        }

    }
    int maxval = -9999999;
    if(a[j] > 0 && j == n - 1)
    {
        index[++k] = n - 1;
    }
    int ind,sec_ind;
    for(i = 0; i < k; i++)
    {
        if(comp[i] > maxval)
        {
            maxval = comp[i];

            ind = index[i];
            sec = index[i - 1];
        }

    }
    while(int i < 0 && in)
}

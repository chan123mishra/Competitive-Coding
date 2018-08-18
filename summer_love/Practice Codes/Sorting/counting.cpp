#include<bits/stdc++.h>
using namespace std;
 bool isFull[n];
int main()
{

    int n;
    cin>>n;
    int a[n];
    for(int i= 0; i < n; i++)
        cin>>a[i];

    sort(a,a+n);
    int max_val= a[n - 1];
    cout<<max_val<<endl;;

    int freq[max_val + 1];
    for(int i = 0; i < (max_val + 1) ; i++)
    {
        freq[i] = 0;
    }
    for(int i = 0; i < n; i++)
    {
        freq[a[i]]++;
    }
    int temp = 0;

    for( int i= 0; i < (max_val + 1) ; i++)
    {
     freq[i] = temp + freq[i];
     temp = freq[i];
    }

    memset(isFull,false,n);
    for(int t = 0; t < (max_val + 1); t++)
        cout<<freq[t]<<endl;

        for(int j = 0; j < (max_val + 1); j++)
        {
            while(freq[i] > 0)
            {

            }
        }


        return 0;
}

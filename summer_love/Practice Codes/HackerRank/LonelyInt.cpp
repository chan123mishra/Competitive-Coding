#include<bits/stdc++.h>
using namespace std;
//void swap(int *, int *);
int main()
{

    int n;
    cin>>n;
    int a[n];

    int i,j;
    for(i = 0; i < n ; i++)
    {
        cin>>a[i];
    }

    sort(a,a+n);
    int max = a[n -1];
    //cout<<max;
    //cout<<max;
    int freq[max+1];
    int cnt = 0;
   for(i = 0; i <= max; i++)
    freq[i] = 0;
    for(i = 0; i <n; i++)
    {
       ++freq[a[i]];
    }
    for(i = 0; i <= max; i++)
    {
        if(freq[i] == 1)
        {
            cout<<i;
            break;
        }
    }
    return 0;
}

/*void swap(int *a, int *b)
{

    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
*/

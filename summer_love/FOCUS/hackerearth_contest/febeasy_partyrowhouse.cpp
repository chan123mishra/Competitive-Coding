#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,q;
    cin>>n>>q;
    long long a[n];
    for(long long i = 1; i <= n; i++)
        cin>>a[i];
    for(long long i = 0 ; i < q; i++)
    {
        long long ch,k,l,r,s;
        long long dist = 0;
    cin>>ch;
    if(ch == 1)
    {
        cin>>k>>l>>r;
        for(long long i = l; i <=r; i++)
        {
            dist = dist + a[i]* abs(k - i);
        }
        cout<<dist<<endl;
    }

    else if(ch = 2)
    {
        cin>>k>>s;
        a[k] = a[k] + s;
    }
    }
    return 0;
}

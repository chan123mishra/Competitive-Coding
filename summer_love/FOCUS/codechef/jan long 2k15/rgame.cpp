#include<bits/stdc++.h>
using namespace std;

long long int fnc(long a[], int first, int last, int i, int n ,long long maj_sum)
{
    long long sum = 0;
    if(i == n + 1)
        return 0;

    sum =   (maj_sum + a[i] * a[first] ) % 1000000007;
    sum = (sum + fnc(a,i,last,i+1,n,a[i]*a[first])) % 1000000007;
    sum = (sum +  a[i] * a[last])%1000000007;
    sum = (sum + fnc(a,first,i,i+1,n,a[i]*a[last])) % 1000000007;

    return sum;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        long a[n + 1];
        for(int i = 0; i < n + 1; i++)
            cin>>a[i];

        long long res = fnc(a,0,0,1,n,0);
        res = res % (1000000007);
        cout<<res<<endl;
    }
    return 0;
}

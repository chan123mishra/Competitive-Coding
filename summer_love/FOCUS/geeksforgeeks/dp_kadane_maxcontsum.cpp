#include<bits/stdc++.h>
using namespace std;
int kadanealgo(int a[], int n)
{
    int cur_sum = 0;
    int max_sum = 0;

    for(int i = 1; i < n; i++)
    {
        cur_sum = cur_sum + a[i];
        if(cur_sum  <  0)
            cur_sum = 0;

        if(max_sum < cur_sum)
            max_sum = cur_sum;
    }

    return max_sum;
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    int neg = 0;
    for(int i = 0; i < n; i++)
    {
        cin>>a[i];
        if(a[i] < 0)
            neg++;
    }

    if(neg == n)
    {
        sort(a,a+n);
        cout<<a[n-1];
        return 0;
    }
        int res = kadanealgo(a,n);
        cout<<res<<endl;
        return 0;
}

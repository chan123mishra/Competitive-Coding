#include<bits/stdc++.h>
using namespace std;
long long countIncSub(long long a[],long long n)
{
    int ctr = 0;
    int index = 0;
    int in;
    for(int i = index; i <n; i++)
    {
        in = a[i];
        for(int j = i + 1; j < n; j++)
        {
            if(in <= a[j])
            {
                in = a[j];
                ctr++;
            }

            else{
                    index = j;
                    break;
                    }
        }
    }

    return ctr + n;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        long long a[n];
        for(long long i = 0; i < n; i++)
            scanf("%lld",&a[i]);

        long long res = countIncSub(a,n);
        cout<<res<<endl;
    }

    return 0;
}

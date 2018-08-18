#include<bits/stdc++.h>
using namespace std;
int main()
{
    long t;
    cin>>t;
    long n;
    while(t--)
    {
        long sum = 0;
        long product = 1;
        cin>>n;
        vector<long>a(n);
        for(long i=0; i<n;i++)
            cin>>a[i];
            long ctr = 0;
            for(long i = 0; i < n; i++)
            {
                sum = a[i];
                product = a[i];
                for(long j = i + 1 ; j < n; j++)
                {
                    sum =  sum + a[j];
                    product =  product* a[j];
                    if(sum == product)
                    {
                        ctr++;
                    }
                }

            }
        cout<<ctr + n<<endl;
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
long long a[100000];
bool sieve[INT_MAX-100000];
vector<long long>primesum(long long A) {
     // bool sieve[A+1];
    memset(sieve,true,sizeof(sieve));
    sieve[0] = false;
    sieve[1] = false;

    for(long long i = 2; i <= A; i++)
    {
        if(sieve[i])
        {
            for(long long j = 2; i*j <= A; j++)
            {
                sieve[i*j] = false;
            }
        }
    }

    long long ctr=0;

    vector<long long>res;


    for(long long i = 0; i <= A; i++)
    {
        if( i == (long long)sqrt(A))
        {
            if(sieve[i])
            {
                a[ctr] = i;
                a[ctr] = i;
                ctr+=2;
            }
        }

        else if(sieve[i])
            a[ctr++] = i;
    }
    long long l = 0;
    long long h = ctr - 1;

    while(l < h)
    {
        if(a[l] + a[h] == A)
        {
            res.push_back(a[l]);
            res.push_back(a[h]);
            break;
        }
        else if(a[l] + a[h] < A)
        {
            l++;
        }
        else
        {
            h--;
        }
    }

    return res;

}
int main()
{
    long long a;
    cin>>a;
    vector<long long>res;
    res = primesum(a);
    cout<<res[0]<<" "<<res[1]<<endl;
    return 0;
}

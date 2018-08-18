#include<bits/stdc++.h>
using namespace std;

int gcdcal(int a , int b)
{
    while(a&&b)
    {
        if(a>b)
        {
            a = a -b;
        }
        else
            b = b -a;
    }

    return abs(a+b);
}

int main()
{
    int n;
    cin>>n;
    long a[n];
    //int a = 1;
    for(int i = 0; i < n; i++)
    {
        cin>>a[i];
    }

    int b = 1;
    int maxgcd = INT_MIN;
    int l = 0;
    int r = 0;
    int gcd = 1;
    int i, j, k;
    for( i = 0; i < n; i++)
    {
        //b = gcdcal(a[i],1);  gcd = a[j];
        // gcd = a[i];
        //cout<<"i = "<<i<<endl;
        for( j = i; j < n; j++)
        {
            gcd = a[i];
           // cout<<" j = "<<j<<endl;

            for(  k = i; k <= j; k++)
            {
                gcd = gcdcal(gcd,a[k]);
                //cout<<"gcd calculated : "<<gcd<<endl;
            }
            if(maxgcd < gcd)
            {
             //   cout<<"Conditn checked when i = "<<i<<"and j = "<<j<<endl;
                l = i;
                r = j;
                maxgcd = gcd;
          //      cout<<"maxGcdJthLoop = "<<maxgcd<<endl;
            }

        }
       // cout<<"maxGcdIthloop = "<<maxgcd<<endl;
    }

    int length = abs(r - l);
    cout<<maxgcd<<endl;
    cout<<length+1<<endl;

    return 0;
}

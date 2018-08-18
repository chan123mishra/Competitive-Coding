#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    //bitset<4>bit[n];
    long long a[n];
   // int sum = 1 & 2;
    for(long long i = 0; i < n; i++)
    {
        cin>>a[i];
      //  bit[i] = a[i];
    }
    long long sum = 0;
    /* BRUTE FORCE APPROACH O(n^2)
    for(int i = 0; i < n - 1; i++)
    {
       // cout<<"\n"<<i<<" number is "<<a[i - 1]<<" and bit pattern is"<<bit[i -1].to_string()<<endl;
        for(int j = i + 1; j < n; j++)
        {
        sum = sum + (bit[i] & bit[j]).to_ulong();
        }
    }
    */

    //Approach to solve in O(n)
    long long ctr;
    //cout<<"Sum = "<<sum<<endl;
    for(int i = 0; i < 32; i++)
    {
        ctr = 0;
        for(long long j = 0; j < n; j++)
        {
            if((a[j] & (1<<i)) > 0)
                ctr++;
      //  cout<<"Cntr = "<<ctr<<endl;
        }
        sum = sum + pow(2,i) * ctr * (ctr - 1)/2;
        //cout<<"Sum = "<<sum<<endl;
    }
    cout<<sum<<endl;
    return 0;
}

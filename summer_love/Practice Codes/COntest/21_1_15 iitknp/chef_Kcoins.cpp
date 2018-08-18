#include<bits/stdc++.h>
using namespace std;
long long int fnc(long long int ctr,long long int k, long long int n)
{
    long long int a[ctr+1];
    long long int kay[ctr+1];
    for(int i = 0; i <= ctr; i++)
    {

        a[i] = pow(k,i);
       // cout<<"val of pow at ind "<<i<<" is "<<a[i]<<endl;
        kay[i] = k;
       //cout<<"k val at ind "<<i<<" is "<<k<<endl;
    }
    long long int sum = n;
    //cout<<"Sum = "<<sum<<endl;
   long long int  cntr = 0;
    //int rem = n;
    for(long long int i = ctr; i >= 0; i--)
    {
       // cout<<"a["<<i<<"] = "<<a[i]<<" and k["<<i<<"] = "<<kay[i]<<endl;
        if(a[i] <= sum && kay[i] > 0)
        {
            //cout<<"Used "<<a[i]<<" coin"<<endl;
            sum = sum - a[i];
            kay[i]--;
            cntr++;
            i = i + 1;
            continue;
    }

}
    return cntr;
}
int main()
{

    long int t;
    cin>>t;
    long long int n;
     long long int k;
   long long int ctr;
    long long int res = 0;
    while(t--)
    {
        ctr = 0;
      long long int rem = 0;
        cin>>n;
        cin>>k;
       long long int dummy = n;
        int flag = 0;
        while(n >= k)
        {
            rem = n % k;
            if(rem != 0)
            {
                flag = 1;
            }
            n = n/k;

            ctr++;
        }

        //cout<<"pow degree = "<<ctr<<endl;

       /*if(rem == 0 && flag != 1)
        {
            cout<<"pow of denom"<<endl;
            cout<<"1"<<endl;
        }
        */

             res = fnc(ctr,k,dummy);
             cout<<res <<endl;


    }


    /*for(int i = 1; i <= 100; i++)
    {
        if(i % 2 == 0)
        {
            cout<<i<<" ";
            i = i * i - 1;
            continue;
        }
    }
    */
    return 0;
}

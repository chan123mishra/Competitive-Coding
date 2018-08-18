#include<bits/stdc++.h>
using namespace std;
long fib(long n)
{
    if(n == 1 )
        return 0;
    else if(n == 2)
        return  1;
    else
        return fib(n - 1) + fib(n - 2);
}
int main()
{
    long n;
    cin>>n;

    long res = fib(n);
    cout<<res<<endl;
    return 0;
}



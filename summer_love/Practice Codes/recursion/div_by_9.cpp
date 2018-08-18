#include<bits/stdc++.h>
using namespace std;
void divBynine(int n)
{
    if( n == 9)
    {
        cout<<"Num is divisible by 9"<<endl;
        return;
    }

    if(n < 9)
    {
        cout<<"Num is not divisible by 9"<<endl;
        return;
    }

    int sum = 0;
    while(n > 0)
    {
        sum = n % 10+ sum;
        n = n / 10;
    }

    divBynine(sum);
}
int main()
{
    int n;
    cin>>n;
    divBynine(n);
    return 0;
}

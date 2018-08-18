#include<bits/stdc++.h>
using namespace std;
void divByeleven(int n)
{
    if(n == 0)
    {
        cout<<"DIvisible by 11"<<endl;
        return;
    }

    if(n < 10)
    {
        cout<<"Not divisible by 11"<<endl;
        return;
    }
    int even = 1;
    int odd = 0;
    int sumEven = 0;
    int sumOdd = 0;
    while(n > 0)
    {
        if(even == 1)
        {
            even = 0;
            odd = 1;
            sumEven = sumEven + n % 10;
            n = n /10;
            continue;
        }

        if(odd == 1)
        {
            even = 1;
            odd = 0;
            sumOdd = sumOdd + n%10;
              n = n/10;
        }

    }

    divByeleven(abs(sumOdd - sumEven));
}
int main()
{
    int n;
    cin>>n;
    divByeleven(n);
    return 0;
}

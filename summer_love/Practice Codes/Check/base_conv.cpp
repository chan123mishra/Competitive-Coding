#include<bits/stdc++.h>
using namespace std;
void base(int , int );
int main()
{
    int n;
    cin>>n;
    int b;
    cin>>b;
    base(n,b);
    return 0;

}

void base(int n, int b)
{
    if(int (n / b) == 0)
    {
        if((n%b) > 9)
    {
        printf("%c",(((n%b)-10) + 65));
    }
    else
        cout<<n;
        return ;
    }
        int s;
        s = n % b;
        if(s > 16)
    {
        printf("%c",((s-10) + 65));
    }

    else
        cout<<s;
     base((n / b),b);

}

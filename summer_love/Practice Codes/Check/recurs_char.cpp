#include<bits/stdc++.h>
using namespace std;
int recur(int );

int main()
{
    int n;
    cin>>n;
    int s;
    s = recur(n);
    cout<<s;
    return 0;

}

int recur(int a)
{
    if(a / 10 == 0)
        return (a) ;
    a = recur(a / 10) + a % 10;
}

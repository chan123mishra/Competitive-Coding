#include<iostream>
using namespace std;
void prime(int l)
{
    if(l == 1)
        return ;
    int i = 2;
    while(l % i != 0)
    {

        i++;
    }
    cout<<i<<" ";
    prime(l/i);
}
int main()
{
    int n;
    cin>>n;
    int l;
    while(n--)
    {
        cin>>l;
        prime(l);
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int n;
    for(int i= 0; i<t; i++)
    {
        cin>>n;
    long int f;
    f = pow(3,(n - n/3)) * pow(2 , n/3);
    cout<<f;
    }
    return 0;
}

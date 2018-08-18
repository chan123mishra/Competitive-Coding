#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        long long v;
        if(n <= 2)
            v = n*n*n;

        else
            v = 6*n*n - 16 - 12*(n-2);

        cout<<v<<endl;

    }

    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin>>t;
    int a,b;
    while(t--)
    {
        cin>>a>>b;
        float minA,maxA;

        minA = sqrt((b*b - a*a));
        maxA = sqrt((a*a + b*b));
        cout<<minA<<" "<<maxA<<endl;
        //cout<<sqrt(4)<<endl;
    }
    return 0;
}

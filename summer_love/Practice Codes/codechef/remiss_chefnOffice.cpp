#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t ;
    cin>>t;
    int maX,miN;
    int a,b;
    while(t--)
    {
        maX = 0;
        miN = 0;
        cin>>a;
        cin>>b;

        miN = max(a,b);
        maX = a + b;

        cout<<miN<<" "<<maX<<endl;
    }

    return 0;
}

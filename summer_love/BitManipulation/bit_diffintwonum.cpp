#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m,p;
        cin>>m>>p;
        bitset<100>b(m^p);
        cout<<b.count()<<endl;
    }
    return 0;
}

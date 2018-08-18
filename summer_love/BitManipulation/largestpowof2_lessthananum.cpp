#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n = 32;
    for(int i = 1; i < 32; i= i * 2)
    {
        n = n | (n>>i);
    }

    cout<<(n+1)/2<<endl;
    return 0;
}

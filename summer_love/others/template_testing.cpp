#include<bits/stdc++.h>
using namespace std;

template<class T>
T minimum(T a, T b)
{
    if(a > b)
        return b;
    else
        return a;
}

int main()
{
    char a = 'a';
    char b = 'b';
    int af = 2;
    int aa = 3;
    cout<<minimum(a,b)<<endl;
    cout<<minimum(af,aa)<<endl;
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n = 2;
    int a[2][2] = {{1,1},{2,2}};
    cout<<&a;
    cout<<"\n"<<&a[0][0]<<endl;
    cout<<*(*(a+n*0)+1);
    return 0;
}

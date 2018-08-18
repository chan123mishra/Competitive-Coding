#include<bits/stdc++.h>
using namespace std;
int main()
{

    char x ;
    int n;
    cin>>n;
    int i;
    char a[n];
   // cin>>(int)t;
    int maxy;

        while(x != '/n')
        {
          x = getchar();
          a[x]++;

        }
        sort(a,a+n);
        maxy = a[n];
        cout<<maxy;
        return 0;

}

#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main()
{

    int i;
    int j;
    int a[3][3];
    for(i = 0; i <3; i++)
    {

        for(j = 0; j < 3; j++)
        {
            cin>>a[i][j];
        }
    }
    sort(a,1);
    for(i = 0; i <3; i++)
    {

        for(j = 0; j < 3; j++)
        {
            cout<<a[i][j];
        }
        cout<<"\n";
    }
}

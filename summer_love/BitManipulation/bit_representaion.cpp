#include<bits/stdc++.h>
using namespace std;
int main()
{
int n = -2;
for(int i = 0; i < 32; i++)
{
if(n&(1<<i))
{
    cout<<"1";
}
else
    cout<<"0";
}
cout<<endl;
return 0;
}

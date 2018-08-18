#include<bits/stdc++.h>
using namespace std;
int main()
{

 int n;
 cin>>n;
 int a[n];
 for(int i = 0; i < n; i++)
    cin>>a[i];
 sort(a,a+n);
 int x;
 cin>>x;
    int pos = lower_bound(a,a+n,x)-a;
    int righ = upper_bound(a,a+n,x)-a;
    cout<<pos<<endl;
    cout<<righ<<endl;
    cout<<righ - pos<<endl;
    return 0;
}

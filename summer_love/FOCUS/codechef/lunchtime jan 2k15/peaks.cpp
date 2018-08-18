#include<bits/stdc++.h>
using namespace std;
int local_mx(int a[],int l, int h)
{
   // int m = (l + h )/2;
    while(l <= h)
    {
        int m = (l + h )/2;
        if(a[m - 1] <= a[m] && a[m] >= a[m + 1])
            return m;

       else if(a[m - 1] > a[m])
            return local_mx(a,l,m-1);

       else if(a[m + 1] > a[m])
            return local_mx(a,m + 1,h);
    }
}
int main()
{
 int n;
 cin>>n;
 int a[n];
 for(int i = 0; i < n; i++)
        cin>>a[i];
 int ans = a[local_mx(a,0,n-1)];
 cout<<"ANS = "<<ans<<endl;
 return 0;
}

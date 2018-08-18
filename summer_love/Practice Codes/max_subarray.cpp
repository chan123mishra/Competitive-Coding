#include<bits/stdc++.h>
using namespace std;
int maxSumovermid(int a[], int l, int m, int h)
{
    int sum = 0;
    int leftmax = INT_MIN;
    int rightmax = INT_MIN;
     for(int i = m; i >= l; i--)
     {
         sum = sum + a[i];
         if(leftmax < sum)
            leftmax = sum;
     }

     sum = 0;
      for(int i = m + 1; i <= h; i++)
     {
         sum = sum + a[i];
         if(rightmax < sum)
            rightmax = sum;
     }

     return (leftmax + rightmax);
}
int max_subarray(int a[], int l, int h)
{
   // cout<<"L = "<<l<<" and H = "<<h<<endl;
    if(l == h)
        return a[l];

    int m = (l + h) / 2;
    //cout<<"Mid = "<<m<<endl;
    return max(max(max_subarray(a,l,m),max_subarray(a,m+1,h)),maxSumovermid(a,l,m,h));
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i = 0; i < n; i++)
        cin>>a[i];
    int res;
    res = max_subarray(a,0,n-1);
    cout<<res<<endl;
}

#include<bits/stdc++.h>
using namespace std;
int palin(char a[] , int l, int r)
{
    int ctr = 0;
    if(l < r)
    {
        if(a[l] == a[r])
            ctr = 1 + palin(a,l+1,r-1);

        else
            return -1;
    }

    return ctr;
}
int main()
{
    char a[100];
    cin>>a;
    int n = strlen(a);
    int res = palin(a,0,n - 1);
 //   cout<<res<<endl;
    if(res == n / 2)
        cout<<"Palindrome"<<endl;
    else
        cout<<"Not Palindrome"<<endl;
    return 0;

}

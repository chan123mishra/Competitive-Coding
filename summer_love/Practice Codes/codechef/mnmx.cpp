
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i = 0; i < n; i++)
            cin>>a[i];

        sort(a,a+n);
        int res;
        res = a[0]*(n-1);
/*
            int sum = 0;
            cin>>a[0];
           int minele = a[0];
        for(int i = 1; i < n; i++)
        {
            cin>>a[i];
            if(a[i] < minele){
                minele = a[i];
            }
            sum = sum + minele;
        }
*/
        cout<<res<<endl;
    }
    return 0;
}

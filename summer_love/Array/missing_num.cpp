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
    int a[n - 1];
    for(int i = 0; i < n - 1; i++)
        cin>>a[i];

    int sum = 0;
    for(int i = 0; i <(sizeof(a)/sizeof(a[0]));i++)
    {
        sum = sum + n - a[i];
        n--;
    }
    cout<<sum+n<<endl;
    }
    return 0;
}

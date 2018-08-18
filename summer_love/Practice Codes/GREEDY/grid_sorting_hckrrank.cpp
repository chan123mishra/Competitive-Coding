#include<bits/stdc++.h>
using namespace std;
int bubble( vector<int>a,int n)
{
    for(int i = n; i >= 0;i--)
    {

        for(int j = 0; j < i; j++)
        {
            if(a[j] > a[j+1])
            {
                swap(a[j],a[j+1]);
            }
        }
    }
}
int main()
{
    int t;
    cin>>t;
    vector<int>a(t);
    for(int i = 0; i < t; i++)
        cin>>a[i];
cout<<endl;
    //bubble(a,t);

 for(int i = t; i >0;i--)
    {

        for(int j = 0; j < i; j++)
        {
            if(a[j] > a[j+1])
            {
                swap(a[j],a[j+1]);
            }
        }
    }
        for(int i = 1; i <= t; i++)
        cout<<a[i]<<" ";

        cout<<endl;
}

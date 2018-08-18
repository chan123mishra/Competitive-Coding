#include<iostream>
#include<map>
#include<algorithm>

using namespace std;
int main()
{
    map<int,int>m;
    int a[20000];
    int t;
    int n;
    cin>>t;
    int max;
    for(int i = 0; i <t; i++)
    {
        cin>>n;
        for(int j=0;j<n;j++)
        {
            cin>>a[j];
        }

        sort(a,a+n);
        max = a[n];
        for(i = 0; i < max; i++)
        {
            ++m[a[i]];
        }
    }

    for(map<int,int>::iterator it = m.begin(); it != m.end(); it++)
    {
        cout<<(*it).first<<" \t"<<(*it).second<<endl;
    }
    return 0;
}

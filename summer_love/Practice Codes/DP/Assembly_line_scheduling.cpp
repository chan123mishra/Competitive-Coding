#include<bits/stdc++.h>
using namespace std;
int min(int a, int b)
{
    if(a <b)
        return a;
    else
        return b;
}
int main()
{
int n;
cout<<"ENter the no. of stations\n";
cin>>n;
int a[n];
int b[n];
int i;
cout<<"Costs for assembly 1\n";
for(i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    cout<<"Costs for assembly 1\n";
    for(i=0; i < n; i++)
    {
        cin>>b[i];
    }
    int e1,e2,x1,x2;
    cout<<"Cost for entry of 1\n";
    cin>>e1;
    cout<<"Cost for entry of 2\n";
    cin>>e2;
    cout<<"Cost for exit of 1\n";
    cin>>x1;
    cout<<"Cost for exit of 2 \n";
    cin>>x2;

    int t1[n]; int t2[n];
    cout<<"Enter the time taken to switch between the assembly line respectively\n and enter zero for the first station  \n";
    for(i = 0; i < n ; i++)
    {
        cin>>t1[i];
    }
     for(i = 0; i < n ; i++)
    {
        cin>>t2[i];
    }
    int tot1[n];
    int tot2[n];

    tot1[0] = e1 + a[0];
    tot2[0] = e2 + b[0];

    for(i = 1; i < n; i++)
    {
        tot1[i] = min(tot1[i - 1] + a[i],tot2[i - 1] + t2[i] + a[i]);
        tot2[i] = min(tot2[i - 1] + b[i],tot1[i - 1] + t1[i]+ b[i]);
    }
   cout<< min(tot1[n - 1] + x1,tot2[n-1] + x2);

return 0;
}

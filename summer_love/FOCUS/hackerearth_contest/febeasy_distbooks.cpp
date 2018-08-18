#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
int n;
cin>>t;
while(t--)
{
cin>>n;
int s[n];
//int t[n];
int maX = 0;
for(int i= 0; i<n; i++)
{
cin>>s[i];
//t[i] = s[i];
maX = maX + s[i] - 1;
}
sort(s,s+n);
int miN = s[0] - 1;
cout<<miN<<" "<<maX<<endl;


}
return 0;
}

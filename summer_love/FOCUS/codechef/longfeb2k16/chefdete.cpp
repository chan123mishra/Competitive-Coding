
#include<bits/stdc++.h>
using namespace std;
int main()
{

int n;
cin>>n;
int a[n];
int mp[n+1];
memset(mp,0,sizeof(mp));
for(int i = 0; i < n; i++)
{
cin>>a[i];
mp[a[i]]++;
}


for(int i = 0; i <= n; i++)
{
	if(mp[i] == 0)
	cout<<i<<" ";
}
cout<<endl;
return 0;
}



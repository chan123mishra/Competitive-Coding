#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i = 0; i < n; i++)
	{
		cin>>a[i];
	}
	int x;
	cin>>x;
	int cur = 0;
	int ctr = 1;
	int maxoc = 0;
	int maxind = 0;
	for(int i = 1; i < n; i++)
	{
		
		if(a[cur] == a[i])
		{
			ctr++;	
		}
		else
		{
			ctr = 1;
			cur = i;
		}
		if(ctr > maxoc)
		{
			maxoc = ctr;
			maxind = i;
		}
		
	}
	
	if(maxoc > (n/2))
	{
		if(a[maxind] == x)
		{
			cout<<"True and Major element is "<<x<<endl;
		}
		else
		{
			cout<<"False and major element is "<<a[maxind]<<endl;
		}
	}
	else
		cout<<"No major element is here"<<endl;
		
		return 0;
}

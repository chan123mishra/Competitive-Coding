#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i = 0; i < n; i++)
		cin>>a[i];
	
	int l = 0;
	int h = n - 1;
	
	while(l < h)
	{
		while(a[l] == 0 && l < h)
			l++;
		while(a[h] == 1 && l < h)
			h--;
		
		if(l < h)
		{
			a[l] = 0;
			a[h] = 1;
			l++;
			h--;
		}
	}
	
	for(int i = 0; i < n; i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
	
	return 0;
}

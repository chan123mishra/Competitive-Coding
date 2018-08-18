//Divisor Condurum
#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	int n;
	cin>>n;
	int a[n];
	for(int i = 0; i < n; i++)
		cin>>a[i];
	int t;
	cin>>t;

	while(t--)
	{
		int p,q;
		cin>>p>>q;
		int ctr = 0;
		for(int i = 0; i < n; i++)
		{
			if((a[i] % p)== 0 || (a[i] % q)== 0)
				ctr++;
		}
		cout<<ctr<<endl;
	}

	return 0;
}

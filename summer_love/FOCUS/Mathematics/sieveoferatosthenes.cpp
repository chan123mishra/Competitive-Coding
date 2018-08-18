#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	bool sieve[n+1];
	memset(sieve, true, sizeof(sieve));
	sieve[0] = false;
	sieve[1] = false;
	for(int i = 2; i <= n; i++)
	{
		if(sieve[i])
		{
			for(int j = 2; i * j <= n; j++)
			{
				sieve[i*j] = false;
			}
		}
	}

	for(int i = 2; i <= n; i++)
	{
		if(sieve[i])
		{
			cout<<i<<" ";
		}
	}

	cout<<endl;

	return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	unsigned long n, res;
	int dummy;
	int k ;
	while(t--)
	{
	    k = 1;
	    res = 0;
		cin>>n;
		dummy  = n;
		while(dummy > 0)
		{
		    dummy = dummy/5;
			res = res + dummy;
			//n = n / 5;
			//dummy = dummy / 5;
			//k++;
		}

		cout<<res<<endl;
	}

    return 0;
}

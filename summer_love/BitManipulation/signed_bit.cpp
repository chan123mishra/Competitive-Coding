#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a = -23;
	a=a>>1;
	for(int i = 31; i >=0; i--)
	{
		if(a&(1<<i))
		{
			cout<<1;
		}
		else
			cout<<0;
	}
	cout<<endl;
}

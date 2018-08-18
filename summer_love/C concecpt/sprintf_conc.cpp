#include<bits/stdc++.h>
using namespace std;
int main()
{
	//char a[10];
	//int n;
	//cin>>n;
	//sprintf(a,"%d",n);
	int an = 123;

	string temp = "";
	while(an > 0)
	{
		temp = ((char)((an%10)+'0')) + temp; ;
		an = an/10;
	}
	cout<<temp<<endl;
	//cout<<a<<endl;
}

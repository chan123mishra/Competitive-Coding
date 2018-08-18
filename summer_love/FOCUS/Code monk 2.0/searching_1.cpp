//Monk Takes a Walk
#include<bits/stdc++.h>
using namespace std;
int main()
{

	int t;
	cin>>t;
	while(t--)
	{
		string str;
		cin>>str;
		string:: iterator it;
		int sum = 0;
		for(it = str.begin(); it != str.end(); it++)
		{
			if(*it == 'A' || *it == 'E' || *it == 'I' || *it == 'O' || *it == 'U' || *it == 'a' || *it == 'i' || *it == 'o' || *it == 'u' || *it == 'e')
				sum++;
		}

		cout<<sum<<endl;
	}

	return 0;
}

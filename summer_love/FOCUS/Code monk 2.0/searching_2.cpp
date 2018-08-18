//Monk and Search
#include<bits/stdc++.h>
using namespace std;
int main()
{

	int n;
	cin>>n;
	int q;


	vector<long long>vec;
	for(int i = 0; i < n; i++)
	{
		long long ele;
		cin>>ele;
		vec.push_back(ele);
	}
	cin>>q;
	sort(vec.begin(),vec.end());

	for(int i = 0; i < q; i++)
	{
		int ch;
		int ele;
		int res = 0;
		cin>>ch>>ele;
		if(ch == 0)
		{
			if(binary_search(vec.begin(),vec.end(),ele))
			{
				res = n - (upper_bound(vec.begin(),vec.end(),ele) - vec.begin()) + 1;
			}
			else
			{
				res = n - (upper_bound(vec.begin(),vec.end(),ele) - vec.begin());
			}

			cout<<res<<endl;
		}
		else
		{
			res = n - (upper_bound(vec.begin(),vec.end(),ele) - vec.begin());
			cout<<res<<endl;
		}

		//vector<long long>::iterator l,u;
		//u = upper_bound(vec.begin(),vec.end(),ele);
		//res = (upper_bound(vec.begin(),vec.end(),ele) - vec.begin());
		//cout<<res<<endl;

	}

	return 0;
}

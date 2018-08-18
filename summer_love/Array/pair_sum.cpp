#include <bits/stdc++.h>
using namespace std;
//map<int,int>mp;
int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n,x;
	    map<int,int>mp;
	    cin>>n;
	    cin>>x;
	    int a[n];
	    bool flag = false;
	    for(int i = 0; i < n; i++)
	    {
	        cin>>a[i];
	        if((x-a[i])>=0 && mp.find(x-a[i]) != mp.end())
	        {
	            cout<<"Yes"<<endl;
	            flag = true;
	            break;
	        }
	        else
	        {
	            mp[a[i]] = 1;
	        }
	    }
	    if(flag == false)
	    {
	    cout<<"No"<<endl;
	    }
	}
	return 0;
}

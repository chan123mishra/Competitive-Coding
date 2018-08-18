#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	char text[100];
	char str[100];
	int t;
	cin>>t;
	while(t--)
	{
	    cin>>text;
	    cin>>str;
	    int n = strlen(text);
	    int m = strlen(str);
	    int hash[n];
	    int ctr = 0;
	    int flag = 0;
	    for(int i = 0; i < n; i++)
	    {

	        for(int j = 0; j < m; j++)
	        {
	            if(text[i+j] != str[j])
	            {
	                //cout<<"Virodh hua hai text me "<<i+j<<" aur string ke "<<j<<" position pe"<<endl;
	                //i = i + m;
	                //cout<<"New i = "<<i<<endl;
	                ctr = 0;
	                break;
	            }
	            ctr++;
	        }
	        if(ctr == m)
	        {
	            cout<<"found"<<endl;
	            flag = 1;
	            break;
	        }
	    }
	    if(flag == 0)
	    {
	        cout<<"Not found"<<endl;
	    }

	}

	return 0;
}

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    char a[100005];
    cin>>a;
    int l = strlen(a);
    int evenchar[l+1];
    evenchar[l] = 0;
    for(int i = l-1; i >= 0; i--)
    {
    	if((a[i] - '0') % 2== 0)
    	{
    		evenchar[i] = evenchar[i+1]+1;
    	}
    	else
    	evenchar[i] = evenchar[i+1];
    }

    for(int i = 0; i < l; i++)
    {
    	cout<<evenchar[i]<<" ";
    }
    cout<<endl;
    return 0;
}


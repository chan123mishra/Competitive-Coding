
#include <stdio.h>
#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long  int x,k;
    cin>>x>>k;
    int a[20];
    int i = 0;
    while(x > 0)
    {
    	//a.push_back(x%10);
    	a[i++] = x%10;
    	x = x / 10;
    }
   /* vector<int>rev;
    for(vector<int>:: reverse_iterator it = a.rbegin(); it != a.rend(); it++)
    {
    	rev.push_back(*it);
    }
*/
int rev[20];
int z = 0;
for(int j = i - 1; j >= 0; j-- )
	rev[z++] = a[j];

	int ctr = 0;
    for( i = 0; i < z; i++)
    {
    	if(ctr == k)
			break;
    	if(rev[i] == 9)
    	{
    		continue;
    	}
			//continue;
    	rev[i] = 9;
    	ctr++;
    }

    for( i = 0; i < z; i++)
    {
    	cout<<rev[i];
    }
    cout<<endl;
    return 0;
}

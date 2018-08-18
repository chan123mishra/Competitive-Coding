#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    long long c,a,b;
    int n;
    long long ctr;
    while(t--)
    {
    	cin>>n;
    	ctr = 0;
    	for(int i = 1; i <= n; i++ )
    	{
    		for(int j = i; j <= n; j++)
    		{
    			if(i != j)
    			{
    				c = i ^ j;
    				cout<<"I = "<<i<<"J = " <<j<<" and XOR = "<<c<<endl;

    				if(c <= n)
    				{
    					ctr++;
    					cout<<"ctrInc = "<<ctr<<endl;

    				}
    		}
    	}
    }
    cout<<ctr<<endl;
}
return 0;
}

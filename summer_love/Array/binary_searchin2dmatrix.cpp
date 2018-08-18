#include<bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n,m;
	    cin>>n>>m;
	    int a[n][m];
	    for(int i = 0; i < n; i++)
	    {
	        for(int j = 0; j < m; j++)
	        {
	            cin>>a[i][j];
	        }
	    }

        int x;
        cin>>x;
	    //cout<<*(*(a)+2*m+m-1)<<endl;// a[i][j] = *(*a + m * i + j)
        int flag = 0;
	    for(int i = 0; i < n; i++)
	    {
	        if(binary_search((*a+i*m),(*a+i*m+m),x))
	        {
	            //cout<<" i = "<<i<<endl;
	            cout<<"1"<<endl;
	            flag = 1;
	            break;
	        }
	    }
	    if(flag == 0)
        {
            cout<<"0"<<endl;
        }

	}
	return 0;
}

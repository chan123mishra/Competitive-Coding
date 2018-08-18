#include <iostream>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n,m;
	    cin>>n>>m;
	    int a[n];
	    int b[m];
	    for(int i = 0; i < n; i++)
	    {
	        cin>>a[i];
	    }
	    //a[n] = INT_MAX;
	    for(int i = 0; i < m; i++)
	    {
	        cin>>b[i];
	    }
	    //b[m] = INT_MAX;
	    /*
	    1 2 3 4 5
		1 2 3	
	    */
	    int l = 0;
	    int h = 0;
	    while(l < n && h < m)
	    {
	        //cout<<"l = "<<l<<", h = "<<h<<endl;
	        if(a[l] == b[h] && (l < n && h < m))
	        {
	            cout<<a[l]<<" ";
	            //cout<<"l = "<<l<<", h = "<<h<<endl;
	            l++;
	            h++;
	        }
	        if(a[l] < a[h] && (l < n && h < m))
	        {
	            cout<<a[l]<<" ";
	          //  cout<<"l = "<<l<<", h = "<<h<<endl;
	            l++;
	        }
	        else if(a[l] > b[h] && (l < n && h < m))
	        {
	            cout<<b[h]<<" ";
	            //cout<<"l = "<<l<<", h = "<<h<<endl;
	            h++;
	        }
	    }
	    
	    if(h < m)
	    {
	    //	cout<<"here\n";
	    	while(h < m)
	    	{
	    		cout<<b[h]<<" ";
	    		//cout<<"l = "<<l<<", h = "<<h<<endl;
	    		h++;
			}
		}
		else if(l < n)
		{
			//cout<<"here\n";
			while(l < n)
			{
				cout<<a[l]<<" ";
				//cout<<"l = "<<l<<", h = "<<h<<endl;
				l++;
			}
		}
	}
	return 0;
}

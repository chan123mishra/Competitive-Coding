#include<bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	   // int x;
	    //cin>>x;
	    int v[n];
	    for(int i = 0; i < n; i++)
	    {
	        cin>>v[i];
	    }
	    
	   sort(v,v+n);
	  int l = 0;
	  int h = n-1;
	 // bool flag = false;
	  int minsum = INT_MAX;
	  int indi = l;
	  int indj = h;
	  while(l < h)
	  {
	      if(abs(v[l] + v[h]) < abs(minsum))
	      {
	         minsum = abs(v[l] + v[h]);
	         indi = l;
	         indj = h;
	      }
	      if((v[l] + v[h]) > 0 )
	      {
	          h--;
	      }
	      else
	      {
	          l++;
	      }
	  }
	 if(v[indi] > v[indj])
	    cout<<v[indj]<<" "<<v[indi]<<endl;
	  else
	    cout<<v[indi]<<" "<<v[indj]<<endl;
	    //cout<<endl;
	}
	return 0;
}

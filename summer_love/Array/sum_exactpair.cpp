#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int x;
	    cin>>x;
	    int v[n];
	    for(int i = 0; i < n; i++)
	    {
	        cin>>v[i];
	    }
	    
	   sort(v,v+n);
	  int l = 0;
	  int h = n-1;
	  bool flag = false;
	  while(l < h)
	  {
	      if((v[l] + v[h]) == x)
	      {
	          cout<<"Yes"<<endl;
	          flag = true;
	      }
	      else if((v[l] + v[h]) > x )
	      {
	          h--;
	          continue;
	      }
	      else if((v[l] + v[h]) < x)
	      {
	          l++;
	      }
	  }
	  if(!flag)
	  {
	      cout<<"No"<<endl;
	  }
	    //cout<<endl;
	}
	return 0;
}

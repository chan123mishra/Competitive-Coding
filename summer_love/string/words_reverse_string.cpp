#include<bits/stdc++.h>
using namespace std;
void reverseword(string &str, int l, int h)
{
	while(l < h)
	{
		swap(str[l],str[h]);
		l++;
		h--;
	}
}
void reverse(string &str, int n)
{
  
    int temp = 0;
    int i = 0;
    while(i <= n)
    {
      if(str[i] == '.')
      {
      	reverseword(str,temp,i-1);
      //	cout<<"l = "<<temp<<" , h = "<<i-1<<endl;
      	temp = i+1;
          //cout<<"Break"<<endl;
      }
      i++;
    }
    
    reverseword(str,0,n-1);
}
int main() {
	//code
	int t;
	cin>>t;
	string temp;
	
	getline(cin,temp);
	while(t--)
	{
	    string str;
	    getline(cin,str);
	    int l = str.length();
	    str[l] = '.';
	    reverse(str,l);
	    cout<<str<<endl;
	    
	}
	return 0;
}

#include <stdio.h>
#include<bits/stdc++.h>
using namespace std;
void fn2(int n, int temp)
{
    cout<<n<<" ";
    if(n == temp)
        return;
    fn2(n+5,temp);
}
void fn1(int &n)
{

    cout<<n<<" ";
    if(n <= 0)
        return;
    n = n - 5;
    fn1(n);
}
int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int temp = n;
	    fn1(n);
	    fn2(n+5,temp);
	    cout<<endl;
	}

	return 0;
}

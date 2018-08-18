#include <iostream>
#include<vector>
using namespace std;
void printarray(int res[],int n)
{
	for(int i = 0; i < n; i++)
	{
		cout<<res[i]<<" ";
	}

	cout<<endl;
}
void printcomb(int res[], vector<int>&point,int totl, int n, int ind)
{

	if(totl == 0)
	{
		printarray(res,ind);

		return;
	}
	else if(totl > 0)
	{

		for(int i = 0; i < n; i++)
		{
            res[ind] = point[i];

			//cout<<"here"<<endl;
			//cout<<"res["<<ind<<"] = "<<res[ind]<<endl;
			printcomb(res,point,totl - point[i],n,ind+1);
		}
	}
}
int main() {
	// your code goes here
	int n;
	cin>>n;
	vector<int>point;
	int pt;
	for(int i = 0; i < n; i++)
	{
		cin>>pt;
		point.push_back(pt);
	}


	int totl;
	cin>>totl;
	int res[100];
	printcomb(res,point,totl,n,0);
	return 0;
}

#include<bits/stdc++.h>
using namespace std;
int coinchange2(vector<int> &A, int B) {

    int m = A.size();
    int n = B;
   int dp[m+1][n+1];
   for(int i = 0; i <= n; i++)
    {
        dp[0][i] = 0;
    }
    for(int i = 0; i <= m; i++)
    {
        dp[i][0] = 1;
    }
    
    for(int i = 1; i <=m; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            if(A[i-1] > j)
            {
                dp[i][j] = dp[i- 1][j];
               // cout<<"dp["<<i<<"]["<<j<<"] = "<<dp[i][j]<<endl;
            }
            else
            {
                dp[i][j] = dp[i-1][j] + dp[i][j - A[i - 1]];
                 //cout<<"dp["<<i<<"]["<<j<<"] = "<<dp[i][j]<<endl;
            }
        }
    }
    
    return dp[m][n];
}

int main()
{
	int n;
	cin>>n;
	vector<int>v;
	int ele;
	for(int i = 0; i < n; i++)
	{
		cin>>ele;
		v.push_back(ele);
	}
	
	int cost;
	cin>>cost;
	int res = coinchange2(v,cost);
	cout<<res<<endl;
	return 0;
}

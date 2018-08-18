#include<bits/stdc++.h>
using namespace std;
int maxCoins(vector<int>& nums) {

        int arr[nums.size() + 2];
        int n = nums.size();
        arr[0] = arr[n+1] = 1;
        for(int i = 0; i < n; i++)
        {
            arr[i+1] = nums[i];
        }

        int dp[n][n];
        for(int i = 0; i < n; i++)
		{
			for(int j = 0; j < n; j++)
			{

				dp[i][j] = 0;
			}
		}
        int j;
        for(int i = 0; i < n; i++)
        {
            j = i+1;
            dp[i][i] = arr[j]*arr[j-1]*arr[j+1];
        }

	int res;
        for(int l = 2; l <= n; l++)
        {
			for(int i = 0; i <= (n-l); i++)
			{
				int j = i + l -1;
				res = INT_MIN;
				for(int k = i; k <= j; k++)
				{

					if(k == 0)
					{
						res = max(res,dp[k+1][j]+arr[i-1+1]*arr[k+1]*arr[j+1+1]);
					}
					else if(k == n - 1)
					{
						res = res = max(res,dp[i][k-1]+arr[i-1+1]*arr[k+1]*arr[j+1+1]);
					}
					else
						res = res = max(res,dp[i][k-1]+dp[k+1][j]+arr[i-1+1]*arr[k+1]*arr[j+1+1]);
				}
				dp[i][j] = res;
				//cout<<"dp["<<i<<"] ["<<j<<"] = " <<dp[i][j]<<" ";
			}
			//cout<<endl;
        }


        return dp[0][n-1];


    }
int main()
{
	int n;
	cin>>n;
	vector<int>a;
	int ele;
	for(int i = 0; i < n; i++)
	{
		cin>>ele;
		a.push_back(ele);
	}
	int res = maxCoins(a);
	cout<<res<<endl;
}

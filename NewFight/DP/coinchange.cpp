#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<bits/stdc++.h>

using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n,m;
    cin>>n>>m;
    int val[m];
    for(int i = 0; i < m; i++)
        {
        cin>>val[i];
    }

    int dp[m+1][n+1];

    memset(dp,0,sizeof(dp));
    for(int i = 0; i <= m; i++)
        {
        dp[i][0] = 1;
    }
    for(int i = 0; i <= n; i++)
        {
        dp[0][i] = 0;
    }
   dp[0][0] = 0;

    for(int i = 1; i <= m; i++)
        {
        for(int j = 1; j <=n; j++)
            {
            if(val[i-1] >= j)
                {
                dp[i][j] = dp[i-1][j] + dp[i][j-val[i-1]];
            }
            else
                dp[i][j] = dp[i-1][j];
        }
    }

    cout<<dp[m][n]<<endl;
    return 0;
}

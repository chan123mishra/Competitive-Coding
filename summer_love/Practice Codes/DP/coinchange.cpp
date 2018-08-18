#include<bits/stdc++.h>
using namespace std;
int dps(int c, int v[], int m)
{
    int dp[c+1];
    dp[0] = 0;
    int temp;
    for(int i = 1; i <= c; i++)
    {
        int min = INT_MAX;
        printf("\n\nFor i = %d:-\n", i);
        for(int j = 0; j < i && j < m; j++)
        {
            if( (i - v[j] >= 0) && (dp[i - v[j]] <= min ))
            {
                temp = i - v[j];
                min = dp[temp];
                printf("when j = %d,\ttemp = %d\n", j, temp);
                dp[i] = min + 1;
            }

        }
        printf("min = %d\n\n", dp[i]);
    }
    return dp[c];
}
int main()
{

    int c;
    cin>>c;
    int n;
    cin>>n;

    int v[n];
    for(int i = 0 ; i < n ; i++)
    {
        cin>>v[i];
    }
    int s = dps(c,v,n);
    cout<<s;
    return 0;
}

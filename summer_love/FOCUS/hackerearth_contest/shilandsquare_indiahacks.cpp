
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,k;
  cin>>n>>k;
  long long sum[n - k + 2];
  long long a[n + 1];
  for(int i = 1; i <= n; i++)
    cin>>a[i];
  long long summ = 0;
  for(int i = 1; i <= (n- k +1); i++)
  {
      summ = 0;
      for(int j = 1; j <=k; j++)
      {
          summ = summ +  j*j*(a[i+j-1]) %(1000000007);
      }

      sum[i] = summ;
  }

  for(int i = 1; i <=(n -k +1); i++)
    printf("%lld ",sum[i]%(1000000007));

  cout<<endl;
    return 0;
}

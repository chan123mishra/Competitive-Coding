#include<bits/stdc++.h>
using namespace std;
long long first(long long m2[], long long low, long long high, long long x, long long n)
{
  if(high >= low)
  {
    long long mid = (low + high)/2;  /*low + (high - low)/2;*/
    if( ( mid == 0 || x > m2[mid-1]) && m2[mid] == x)
      return mid;
    else if(x > m2[mid])
      return first(m2, (mid + 1), high, x, n);
    else
      return first(m2, low, (mid -1), x, n);
  }
  return -1;
}

long long last(long long m2[], long long low, long long high, long long x, long long n)
{
  if(high >= low)
  {
    long long mid = (low + high)/2;  /*low + (high - low)/2;*/
    if( ( mid == n-1 || x < m2[mid+1]) && m2[mid] == x )
      return mid;
    else if(x < m2[mid])
      return last(m2, low, (mid -1), x, n);
    else
      return last(m2, (mid + 1), high, x, n);
  }
  return -1;
}
long long count(long long m2[], long long x, long long n)
{
  long long i; // index of first occurrence of x in arr[0..n-1]
  long long j; // index of last occurrence of x in arr[0..n-1]

  /* get the index of first occurrence of x */
  i = first(m2, 0, n-1, x, n);

  /* If x doesn't exist in arr[] then return -1 */
  if(i == -1)
    return i;

  /* Else get the index of last occurrence of x. Note that we
      are only looking in the subarray after first occurrence */
  j = last(m2, i, n-1, x, n);

  /* return count */
  return j-i+1;
}
int main()
{

    long long  n;
    long long  a[n];
    for(long long  i = 0; i < n; i++)
    {
       cin>>a[i];
    }

    long long x;
    cin>>x;
    long long res = count(a,x,n);
}

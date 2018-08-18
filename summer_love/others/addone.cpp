#include<stdio.h>
#include<iostream>
using namespace std;
int addOne(int x)
{
  int m = 1;

  /* Flip all the set bits until we find a 0 */
  while( x & m )
  {
    x = x^m;
    cout<<"inside loop\n";
    m <<= 1;
  }
cout<<"m = "<<m<<" and x = "<<x<<endl;
  /* flip the rightmost 0 bit */
  x = x^m;
  return x;
}

/* Driver program to test above functions*/
int main()
{
  printf("%d", addOne(8));
  return 0;
}

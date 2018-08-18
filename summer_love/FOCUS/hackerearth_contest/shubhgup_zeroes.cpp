#include<bits/stdc++.h>
using namespace std;
long long len_b = 0;
long long  arr[100000000];
long long trail( )
{
    long long ctr = 0;
    for(int i = len_b; i >= 0; i--)
    {
        if(arr[i] != '0')
            break;
        else
        ctr++;
    }
    return ctr;
}

void convert10tob(long long N,long long  b)
{
     if (N==0)
        return;

     int x = N%b;
     N/=b;
     if (x<0)
        N+=1;

     convert10tob(N,b);
     arr[len_b++] = x<0?x+(b*-1):x;
     return;
}

int main()
{
    long long n;
    cin>>n;
    long long a[n];
    long long p = 1;
    for(long long i =0 ;i < n; i++)
    {
        cin>>a[i];
         p = p * a[i];
    }
int q ;

cin>>q;
while(q--)
{
int b;
cin>>b;
convert10tob(n,b);
for(int i = 0; i < len_b; i++)
{
    cout<<arr[i]<<" ";
}
cout<<endl;
long long ans = trail();
cout<<trail();
memset(a,'0',sizeof(a));
}
/*
while(q--)
{
    cin>>b;


   cout<<ctr<<endl;
}
*/
return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main()
{

   char ch;
    int a[30]={0};
    int t;
    cin>>t;
    int ct ;
    ch = '0';
  while(t--){
        ct = 0;
ch = getchar();
 while(ch != '\n')
    {

    ch=getchar();
    a[ch-97]++;
    if(a[ch-97]==1)
    {
    ct++;
    }
    }
    for(int i= 0; i <26; i++)
            a[i] = 0;

   printf("%d",ct);

    }
    return 0;
}

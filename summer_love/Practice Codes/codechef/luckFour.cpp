#include<bits/stdc++.h>
#include<cstdio>
using namespace std;
int main()
{
    int t;
    cin>>t;
   // cout<<endl;
    //vector<char>a;
     int ctr = 0;
     char c[10];
    int i = 0;
    while(t--)
    {
        char ch = getchar();
       while((c[i] = getchar()) != '\n')
       {
           if(c[i] == '4')
            ctr++;
           i++;

       }
       cout<<ctr<<endl;
    }
    return 0;
}

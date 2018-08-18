#include<bits/stdc++.h>
using namespace std;
int fnc(int n)
{
    if(n == 1)
        return 1;

    else if(n % 2 == 0)
        return fnc( n / 2);

    else
    return fnc(n / 2 ) + 1;

}
int main()
{
    int  a,b;
    cin>>a;
    cin>>b;
    int lesS,maX = 0;
     int siZe  = 0;
     if(a > b)
     {
         lesS = b;
         maX = a;
     }
        //less = b;
        //size = a - b;
     else
     {
         lesS = a;
         maX = b;
     }
        siZe = abs(b - a);
    int cap[ siZe + 1];
    for(int i = 0; i <= siZe; i++)
    {
       cap[i] = fnc(i + lesS);
       //cout<<cap[i]<<endl;
    }


        sort(cap,cap+siZe +1);
        cout<<cap[siZe]<<endl;
    return 0;
}

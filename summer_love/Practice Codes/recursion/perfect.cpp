#include<bits/stdc++.h>
using namespace std;
int sum(int n, int l)
{
    int dum = n;
    int summ = 0;

    if(l > 1)
    {
        if(n % l == 0)
        {
           // cout<<dum/l<<endl;
            summ = dum / l + sum(n , l - 1);
        }
        else
            summ =  sum(n,l - 1);
    }
return summ;
}
int main()
{
    int n;
    cin>>n;
    int suM = sum(n,n);
   // cout<<"sum = "<<suM<<endl;
    if(suM == n)
        cout<<"perfect"<<endl;

    else
        cout<<"Imperfect"<<endl;

    return 0;
}

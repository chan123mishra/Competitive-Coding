#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(true)
    {
       cin>>n;
       if(n == 0)
        break;

       int a[n];
       int rev[n];
       int ctr = 0;
       for(int i = 0; i < n; i++)
        {
            cin>>a[i];
            rev[a[i] - 1] = i+1;
            //if(rev[i] == a[i])
                //ctr++;
        }
     //cout<<"Counter is = "<<ctr<<endl;
    for(int i = 0; i < n; i++)
        {
            if(a[i] == rev[i])
                ctr++;
        }

        if(ctr == n)
            cout<<"\nambiguous\n";

        else
            cout<<"\nnot ambiguous\n";
    }
    return 0;
}

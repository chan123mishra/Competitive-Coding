/*
#include<bits/stdc++.h>
using namespace std;
void dec(long long *m, long long *n1,long long *n2)
{
   /*    return;

        (*m)--;
    dec(m,n1,n2);
    */
    /**m = min(*n1,*n2);
    cout<<*m<<endl;

}
int main()
{
    long t;
    cin>>t;
    long long n1,n2,m;
    long long c;

    while(t--)
    {
        cin>>n1;
        cin>>n2;
        cin>>m;

       /* for(long long i = m; i > 0; i--)
        {

            if(n1 == 0 || n2 == 0)
                break;
            if(m > n1 || m > n2)
            {
                dec(&i,&n1,&n2);

            }
            n1 = n1 - i;
            n2 = n2 - i;
        //    cout<<"After taking out "<<m<<" stones, n1 = "<<n1<<" and n2 = "<<n2<<endl;
        }
         */
        /* if(m > n1 || m > n2)
         {
             m = min(n1,n2);
         }
         int i = 1;
         while(i <= m)
         {
            if(n1 == 0 || n2 == 0)
                break;

            n1 = n1 - i;
            n2 = n2 - i;

            //if(n == 0 || n2 == 0)
            i++;
         }
          cout<<n1+n2<<endl;
      //  cout<<"finally sum of stones left = "<<n1+n2<<endl;
    }

    return 0;
}
*/
#include<bits/stdc++.h>
using namespace std;
void dec(long long *m, long long *n1,long long *n2)
{
    if( *m <= *n1 && *m <= *n2)
        return;

        (*m)--;
    dec(m,n1,n2);
}
int main()
{
    int t;
    cin>>t;
    long long n1,n2,m;
    long long c;

    while(t--)
    {
        cin>>n1;
        cin>>n2;
        cin>>m;

        for(long long i = m; i > 0; i--)
        {

            if(n1 == 0 || n2 == 0)
                break;
            if(m > n1 || m > n2)
            {
                dec(&i,&n1,&n2);
            }
            n1 = n1 - i;
            n2 = n2 - i;
        //    cout<<"After taking out "<<m<<" stones, n1 = "<<n1<<" and n2 = "<<n2<<endl;
        }
          cout<<n1+n2<<endl;
      //  cout<<"finally sum of stones left = "<<n1+n2<<endl;
    }

    return 0;
}

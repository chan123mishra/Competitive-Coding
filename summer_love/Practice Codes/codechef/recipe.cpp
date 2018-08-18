#include<bits/stdc++.h>
using namespace std;
int HCF(int x, int y)      // function body starts here
{
     int result1;

     while((x%y)!=0)
     {
       result1=x%y;
       x=y;
       y=result1;
     }
     return y;    // returns value
}
int main()
{
    int t;
    int n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n];
        //int b[n];
        for(int i = 0; i < n; i++)
        {
            cin>>a[i];
           // b[i] = a[i];
        }
        int num1 = a[0];
        int num2;
        int result;
        for(int j=0;j<n -1;j++)
        {
            num2=a[j+1];
            result=HCF(num1,num2);    // calling function
            num1=result;
        }
      //  int hcf = 1;
       // sort(b,b+n);

       // cout<<"\nAfter sorting :-\n";
        //for(int i = 0; i < n; i++) cout<<a[i]<<" ";
        //cout<<endl;
      //  int minE = a[0];
        /*for(i = 0; i < n; i++)
        {
            if(a[i] == 1)
            {
                hcf = 1;
                break;
            }
            while(a[i]  > 1)
            {

            if(a[i] % hcf == 0)
            {
                hcf = a[i]/hcf;
            }

            a[i] = a[i] / hcf;
            }
            */
           /* int ctr=0;
            for(int i = 2; i <= minE; i++)
            {
                if(minE % i == 0)
                {
                    ctr = 0;
                  //  cout<<"HCF = "<<hcf<<endl;
                    for(int j = 0; j < n; j++)
                    {
                        if(b[j] % i == 0 )
                        {
                            ctr++;
                           // cout<<"ctr for "<<a[j]<<" is "<<ctr<<endl;
                        }
                    }

                    if(ctr == n)
                    {
                        if(i % hcf == 0)
                            hcf = i;
                        else
                            hcf = hcf * i;
                        //cout<<"HCF is "<<hcf<<" when factor is "<<i<<endl;
                    }

                }
            }
*/
            for(int i = 0; i < n; i++)
            {
                cout<<a[i]/result<<" ";
            }
            cout<<endl;
           // cout<<"HCF = "<<hcf<<endl;
        }
    }

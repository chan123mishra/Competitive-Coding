#include<bits/stdc++.h>
using namespace std;
int main()
{
    long n,k;
    cin>>n>>k;
    char a[n];
    cin>>a;
    int minimal [k][3];
    for(int i = 0; i < k; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            minimal[i][j] = 0;
        }
    }
    int l = 0;
    for(int i = 0; i < (k); i++)
    {
         l = i;
        for(int j = 0; j < (n/ k); j++)
        {
            if(a[l] == 'a')
            {
                minimal[i][0] ++;
            }

            if(a[l] == 'b')
                minimal[i][1] ++;
            if(a[l] == 'c')
                minimal[i][2] ++;

            l = l + k;
        }

    }
      for(int i = 0; i < k; i++)
    {
        for(int j = 0; j < 3; j++)
        {
           cout<< minimal[i][j] <<" ";
        }
        cout<<endl;
    }

    char res[k];
    l = 0;
        for(int i = 0; i < k; i++)
    {
        if(minimal[i][0] >= minimal[i][1])
        {
            if(minimal[i][0] >= minimal[i][2])
            {

                res[l] = 'a';
            l++;

            }
            else
            {
                     res[l] = 'c';
            l++;
            //continue;
            }
        }
        else if(minimal[i][1] > minimal[i][0])
        {
            if(minimal[i][1] >= minimal[i][2])
            {
                res[l] = 'b';
                l++;
               // continue;
            }
                        else
            {
                     res[l] = 'c';
            l++;
            //continue;
            }
        }
        else if(minimal[i][2] > minimal[i][0])
        {
            if(minimal[i][2] > minimal[i][1])
            {
            res[l] = 'c';
            l++;
            //continue;
        }
        else
            res[l] = 'b';
            l++;
            //continue;
        }
        cout<<res[l - 1];
    }
cout<<endl;
    return 0;
}

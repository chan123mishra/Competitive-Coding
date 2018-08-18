#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    char a[n][n];
    int i,j;
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            cin>>a[i][j];
        }
    }

    int h[2*n+2][3], flag;
    for(i = 0; i < 2*n+2; i++)
    {
        for(j = 0; j < 3; j++)
        {
            h[i][j] = 0;
        }
    }
    int k = 0;

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {

            if(a[i][j] == '1')
            {
              h[k][1]++;
            }

            if(a[i][j] == '2')
            {
                h[k][2]++;
            }

            if(a[i][j] == '*')
            {
                h[k][0]++;
            }

        }
        k++;
    }
  // cout<<k<<endl;
   // int rw = k;
   // cout<<"Rowcount is "<<rw<<endl;

     for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {

            if(a[j][i] == '1')
            {
              h[k][1]++;
            }

            if(a[j][i] == '2')
            {
                h[k][2]++;
            }

            if(a[j][i] == '*')
            {
                h[k][0]++;
            }

        }
        k++;
    }
   // cout<<k<<endl;
    //int cw = k - rw;
//cout<<"Colcount is "<<k - rw<<endl;
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            if(i == j)
            {
               if(a[i][j] == '1')
            {
              h[k][1]++;
            }

            if(a[i][j] == '2')
            {
                h[k][2]++;
            }

            if(a[i][j] == '*')
            {
                h[k][0]++;
            }
        //k++;
        flag = 1;
        }

            }
            //if(flag == 1)
              //  break;
        }
        k++;
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            if(j == n - i - 1)
            {
               if(a[i][j] == '1')
            {
              h[k][1]++;
            }

            if(a[i][j] == '2')
            {
                h[k][2]++;
            }

            if(a[i][j] == '*')
            {
                h[k][0]++;
            }

         flag = 1;
        }

            }
           // if(flag == 1)
              //  break;
        }

      //  cout<<k<<endl;

       //cout<<"Rowcount is "<<k<<endl;

        //cout<<k;*/
        for(i = 0; i < (2*n + 2); i++)
        {
            for(j = 0; j < 3; j++)
            {
                cout<<h[i][j]<<" ";
            }
            cout<<"\n";
        }
    int l = 0;
    //vector<int>counter;
    int counter[100];
    for(i = 0; i < (2*n +2); i++)
    {
       if(h[i][1] == 0 || h[i][2] == 0)
       {
           counter[l++] = h[i][0];
       }
    }

    /*vector<int> :: iterator it;
    for(it = counter.begin() ; it != counter.end();it++)
    {
        cout<<(*it);
    }
    //iterator
    */

    for(i = 0; i < l; i++)
        cout<<counter[i]<<" ";
    cout<<endl;
   sort(counter,counter + n);
    cout<<(2*counter[0] - 1);


return 0;

}

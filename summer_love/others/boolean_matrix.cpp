#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m;
    cin>>m;
    int n;
    cin>>n;
    int a[m][n];
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
         {
            cin>>a[i][j];
         }
    }
    int firstR,firstC;
    firstR = firstC = 0;

    for(int i = 0; i < m; i++)
    {
        if(a[i][0] == 1)
        {
            firstC = 1;
        }

    }
      for(int i = 0; i < n; i++)
        {
            if(a[0][i] == 1)
            {
                firstR = 1;
            }

        }

//cout<<"check1\n";


    for(int i = 1; i < m; i++)
    {
        for(int j = 1; j < n; j++)
        {
            if(a[i][j] == 1)
            {
                a[i][0] = 1;
                a[0][j] = 1;
            }

        }
    }
//cout<<"check2\n";
    for(int i = 1; i < m; i++)
    {
        for(int j = 1; j < n; j++)
        {
            if(a[i][0] == 1 || a[0][j] == 1)
            {
                a[i][j] = 1;
            }
        }
    }
//cout<<"check3\n";
    if(firstR == 1)
    {
        for(int i = 0; i < n; i++)
        {
         a[0][i] = 1;
        }
    }

    if(firstC == 1)
    {
       for(int i = 0; i < m; i++)
        {
         a[i][0] = 1;
        }
    }

    cout<<"OUTPUT\n";
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}

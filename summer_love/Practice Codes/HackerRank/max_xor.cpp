#include<bits/stdc++.h>
#include<stdio.h>
#include<vector>
using namespace std;
int main()
{

   int arr[1001];
   vector<int>vec;
    int l,r;
    cin>>l;
    cin>>r;
    int i,j;
    int n = r - l;
    int max = INT_MIN;
    cout<<n<<endl;
    for(i = 0; i < n; i++)
    {
        vec.push_back(i);
    }
    cout<<vec.begin()<<endl;
    cout<<vec.end()<<endl;
    /*for(i = 0; i < n; i++)
    {
    for(j = 0; j < n; j++)
    {
        vec.push_back((i+l) ^(j + l));
        int max_vec;

        if(arr_max > max)
        {
            max = arr[i]
        }
    }
    }
      */


   /* for(i = 0; i <= n; i++)
    {
        for(j = 0; j <= n; j++)
        {
            //a[i][j] = (l+i)^(l+j);
        }
    }*/

    /* for(i = 0; i <= n; i++)
    {
        for(j = 0; j <= n; j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<"\n";
    }*/
    return 0;


}

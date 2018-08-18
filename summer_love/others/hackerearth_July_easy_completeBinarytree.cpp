#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int fnc(vector<int>&vec)
{
    if(vec.size() == 1)
        return vec[0];

   /* for(int i = 0; i < vec.size(); i++)
    {
        cout<<vec[i]<<" ";
    }
    cout<<endl;
    */
    vector<int>temp;
    int n = vec.size();
    for(int i = 0; i < n; i+=2)
    {   if(i + 1 < n)
        temp.push_back(vec[i]^vec[i+1]);
        else
        {
            temp.push_back(vec[i]);
            break;
        }
    }
    return fnc(temp);
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>vec;
        for(int i = 0; i < n; i++)
        {
            int ele;
            cin>>ele;
            vec.push_back(ele);
        }

        int res = fnc(vec);
        cout<<res<<endl;
    }
    return 0;
}

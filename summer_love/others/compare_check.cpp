
//Author chanfool21
#include<bits/stdc++.h>

using namespace std;
bool compare(pair<int,int>l, pair<int,int>r)
{
    return (l.first < r.first);
}

int main()
{

     /*int n;
        cin>>n;
        vector<pair<int,int> >vec;
        //sort(vec.begin(),vec.end());
        int s,e;
        for(int i = 0; i < n; i++)
        {
            cin>>s>>e;
            vec.push_back(make_pair(s,e));
        }
        sort(vec.begin(),vec.end(),compare);
         for(int i = 0; i < vec.size(); i++)
        {
            cout<<vec[i].first<<" "<<vec[i].second<<" ";
        }
        cout<<endl;
        */
        vector<int>A;
        for(int i = 0; i < 5; i++)
        {
            int ele;
            cin>>ele;
            A.push_back(ele);
        }
        int B;
        cin>>B;
         vector<int>::iterator low;
     sort(A.begin(),A.end());
   if(!binary_search(A.begin(),A.end(),B))
    return 0;

  cout<<(upper_bound(A.begin(),A.end(),B) - lower_bound(A.begin(),A.end(),B))<<endl;
}

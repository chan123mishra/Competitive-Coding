#include<bits/stdc++.h>
using namespace std;

void fnc(int ctr,bool &flag,vector<vector<int> >&res, map<string, int>&mp,string &cur,vector<int>&A,vector<int>&temp,int ind, int n, int cursum, int B)
{
    cout<<"Recursion no. = "<<ctr<<endl;

    if(cursum > B)
    return;
    if(cursum == B)
    {
        cout<<"Formed vector:\n";
        for(int i = 0; i < temp.size(); i++)
        {
            cout<<temp[i]<<" ";
        }
        cout<<endl;
        if(mp.find(cur) == mp.end())
        {
            flag = true;
            res.push_back(temp);
            mp[cur]+=1;
            return;
        }

    }

    for(int i = ind; i < n; i++)
    {
        flag = false;
        temp.push_back(A[i]);
        cur.push_back(A[i]+'0');
        fnc(ctr+1,flag,res,mp,cur,A,temp,i+1,n,cursum+A[i],B);


        temp.pop_back();
        cur.erase(cur.size()-1);

    }

}
void fnc1(map<string, int>&mp,string &cur,vector<int>&a, int n, bool flag, int cursum,int pos,vector<int>temp,vector<vector<int> >&res)
{

    if(cursum == 0)
    {
        if(mp.find(cur) == mp.end())
        {
            flag = true;
            res.push_back(temp);
            mp[cur]+=1;
            return;
        }
    }
    if(cursum < 0)
        return;

    for(int i = pos; i < n; i++)
    {

        if(i > 0 && a[i] == a[i-1] && !flag)
            continue;
        temp.push_back(a[i]);
        cur.push_back(a[i]+'0');
        fnc1(mp,cur,a,n,true,cursum - a[i],i+1,temp,res);
        temp.pop_back();
        cur.erase(cur.end()-1);
    }
}
vector<vector<int> >combinationSum(vector<int> &A, int B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    vector<vector<int> >res;
    vector<int>temp;
    int n = A.size();
    sort(A.begin(),A.end());
    map<string,int>mp;
    string cur = "";
   /* bool flag = false;
    int ctr = 0;
    fnc(ctr,flag,res,mp,cur,A,temp,0,n-1,0,B);

    */
    fnc1(mp,cur,A,n,false,B,0,temp,res);
    return res;

}

int main()
{
    int n;
    cin>>n;
    vector<int>vec(n,0);
    for(int i = 0; i < n; i++)
        cin>>vec[i];

    int b;
    cin>>b;
    vector<vector<int> >res;
    res = combinationSum(vec,b);
    for(int i = 0; i < res.size(); i++)
    {
        for(int j = 0; j < res[i].size(); j++)
        {
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;

}


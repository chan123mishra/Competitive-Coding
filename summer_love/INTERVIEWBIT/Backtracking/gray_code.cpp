#include<bits/stdc++.h>
using namespace std;
void fnc(int pos,vector<int>&res, vector<bool>temp, int n)
{
    if(pos >= n)
        return;
    int dec = 0;
    cout<<"Temp array"<<endl;
    for(int i = 0; i < n; i++)
    {
        cout<<temp[i]<<" ";
        dec+=(int)temp[i]*pow(2,i);
    }
    cout<<endl;
    res.push_back(dec);

    for(int i = pos; i < n; i++)
    {
       if(temp[i] == false)
            temp[i] = true;
       else
        temp[i] = false;
       fnc(i+1,res,temp,n);
       if(temp[i] == false)
            temp[i] = true;
       else
        temp[i] = false;
    }
}
void fnc1(int ind, int n, vector<vector<int> >&org)
{
    if(ind == n)
        return;
    vector<vector<int> >rev;
    for(int i = 0; i < org.size(); i++)
    {
        rev.push_back(org[i]);
    }

    reverse(rev.begin(),rev.end());
    for(int i = 0; i < org.size(); i++)
    {
        org[i].push_back(0);
    }
    for(int i = 0; i < rev.size(); i++)
    {
        rev[i].push_back(1);
    }
    for(int i = 0; i < rev.size(); i++)
    {
        org.push_back(rev[i]);
    }
    rev.clear();
    fnc1(ind+1,n,org);

}
void grayCode(int A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int n = A;
   /* vector<bool>temp(n,false);
    vector<int>res;
    fnc(0,res,temp,n);
    return res;
    */

    vector<vector<int> >org;
    vector<vector<int> >rev;
    vector<int>temp;
    temp.push_back(0);
    org.push_back(temp);
    temp.clear();
    temp.push_back(1);
    org.push_back(temp);
    temp.clear();
    fnc1(1,n,org);
    vector<int>res;
   // cout<<"Gray code: "<<endl;
    for(int i = 0; i < org.size(); i++)
    {
        //int dec = 0;

        for(int j = n - 1; j >= 0; j--)
        {
            cout<<org[i][j];
           // dec += org[i][j]*pow(2,j);
        }
        cout<<" ";
       // res.push_back(dec);
    }
  //  cout<<endl;



}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    int n;
    cin>>n;
    grayCode(n);
    cout<<endl;
    }
    return 0;
}

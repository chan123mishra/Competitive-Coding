#include<bits/stdc++.h>
using namespace std;
map<int,string>mp;
void fnc(int pos, int n, string str,string A,vector<string>&res)
{
    if(pos > n)
        return;
    if(pos == n)
    {
        if(str.size() == n)
        res.push_back(str);
        return;
    }

    for(int i = pos; i < n; i++)
    {
        string temp = mp[A[i]-'0'];
     //   cout<<"temp = "<<temp<<endl;
        for(int j = 0; j < temp.size();j++)
        {
            str.push_back(temp[j]);
            fnc(i+1,n,str,A,res);
            str.erase(str.end() - 1);
        }

    }
}
vector<string>letterCombinations(string A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    mp[0] = "0";
    mp[1] = "1";
    mp[2] = "abc";
    mp[3] = "def";
    mp[4] = "ghi";
    mp[5] = "jkl";
    mp[6] = "mno";
    mp[7] = "pqrs";
    mp[8] = "tuv";
    mp[9] = "wxyz";

    int n = A.size();
    string str = "";
    vector<string>res;
    fnc(0,n,str,A,res);
    return res;
}

int main()
{
    string A;
    cin>>A;
    vector<string>res = letterCombinations(A);
    for(int i = 0; i < res.size(); i++)
        cout<<res[i]<<endl;
}

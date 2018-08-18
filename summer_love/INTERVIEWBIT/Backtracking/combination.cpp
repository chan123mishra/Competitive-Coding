#include<bits/stdc++.h>
using namespace std;

vector<vector<int> >res;
void fnc(int ctr,int cur,int n, vector<int>&temp, int k,bool visited[])
{
    cout<<"Recursion level = "<<ctr<<endl;
    cout<<"bool array status:"<<endl;
    for(int i = 1; i <= n; i++)
    {
        cout<<visited[i]<<" ";
    }
    cout<<endl;
    cout<<"Size of temp = "<<temp.size()<<endl;
    if(temp.size() == k)
    {
        res.push_back(temp);
        //cout<<"last eliminated = "<<temp[k-1]<<endl;
        //visited[temp[k-1]] = false;
        //temp.pop_back();
        return;
    }

    for(int i = cur; i <= n; i++)
    {
        cout<<"i = "<<i<<endl;
        if(ctr == 0)
            temp.clear();
        if(!visited[i])
        {
            cout<<"visited i = "<<i<<endl;
            temp.push_back(i);
            visited[i] = true;
            fnc(ctr+1,i,n,temp,k,visited);
           // temp.pop_back();
            visited[i] = false;
            temp.pop_back();
        }

    }
}
void combine(int n, int k) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    if(k > n)
    return ;
    vector<int>temp;
    bool visited[n+1];
    memset(visited,false,sizeof(visited));
    fnc(0,1,n,temp,k,visited);
//    return res;
}

int main()
{
    int n,k;
    cin>>n>>k;
    combine(n,k);

    for(int i = 0; i < res.size(); i++)
    {

        vector<int>::iterator it;
        for(it = res[i].begin(); it != res[i].end(); it++)
        {
            cout<<*it<<" ";
        }
        cout<<endl;
    }

    return 0;
}

#include<bits/stdc++.h>
using namespace std;
bool compare(const pair<int,int>&i,const pair<int,int>&j)
{
    /*if(j.second > i.second  )
    {
        return i.first < j.first;
    }
    else
        return i.first > j.first;
        */

        return i.first > j.first;
}
int main()
{

int n;
cin>>n;
int a[n];
for(int i = 0; i < n; i++)
{
    cin>>a[i];
}

sort(a,a+n);
priority_queue< pair<int,int> ,vector<pair<int,int> >, compare >pq;
int ctr = 1;
for(int i = 1; i < n; i++)
{

    if(a[i - 1] == a[i])
    {
        ctr++;
    }
    else
    {
        pq.push(make_pair(ctr,a[i-1]));
        ctr = 1;
    }
}
pq.push(make_pair(ctr,a[n-1]));

while(!pq.empty())
{
    pair<int,int>temp;
    temp = pq.top();
    pq.pop();

    while(temp.first > 0)
    {
        cout<<temp.second<<" ";
        temp.first--;
    }
}
return 0;
}

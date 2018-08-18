
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
// your code goes here
vector<pair<int,int> >vec;
for(int i = 0; i < 5; i++)
{
int ele;
cin>>ele;
if(mp.find(ele) != mp.end())
{
mp[ele] = 1 + mp[ele];
}
else
{
mp[ele] = 1;
}
}
map<int,int>:: iterator it;
for(it = mp.begin(); it != mp.end(); it++)
{
cout<<it->first<<" ";
}
cout<<endl;

return 0;
}

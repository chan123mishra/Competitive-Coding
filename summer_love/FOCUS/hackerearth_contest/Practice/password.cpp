#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    //cout << "Hello World!" << endl;
    map<string,int>mp;
    int n;
    cin>>n;
    string temp;
    for(int i = 0; i < n; i++)
    {
    	cin>>temp;
    	mp[temp] = 1;
    }



    return 0;
}

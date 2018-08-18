#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str = "";
    while(str != "return 0;")
    {
    getline(cin,str);
    int n = str.length();
    int x = str.find("//");
    if(str.find("->") < x)
    {
    	str.replace(str.find("->"),str.find("->")+1,".");
    }

    cout<<str<<endl;
    }



    return 0;
}


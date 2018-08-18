#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string str;
        cin>>str;
        stack<char>st;
        int i = 0;
        while(i < str.length())
        {
            if(str[i] == '(')
            {
                st.push(str[i]);
            }

            if(str[i] == ')')
            {
                st.pop();
            }
            i++;
        }

        if(st.empty())
        {
            cout<<"Balanced\n";
        }
        else
            cout<<"Not balanced\n";
    }

    return 0;
}

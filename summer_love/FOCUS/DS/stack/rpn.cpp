#include<bits/stdc++.h>
using namespace std;
void displaystack(stack<char>s)
{
    if(s.empty())
    {
        cout<<"Stack is empty\n";
    }
    while(!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }
}
int main()
{
    int t;
    cin>>t;
    map<char,int>mp;
    mp['('] = 2;
    mp[')'] = 2;
    mp['+'] = 0;
    mp['-'] = 0;
    mp['*'] = 1;
    mp['/'] = 1;
    mp['%'] = 1;

    while(t--)
    {
        string str;
        stack<char>st;
        cin>>str;
        int i = 0;
        while(i < str.length())
        {

            if(str[i] == ')')
            {
                 char v;
                do
                {
                    v = st.top();
                    if(v != '(')
                    cout<<v<<" ";

                    st.pop();
                }while(v != '(');
            }

            else if(str[i] == '+' || str[i] == '-' || str[i] == '*' || str[i] == '/' || str[i] == '%' || str[i] == '(' )
            {
                while(!st.empty())
                {
                    char v = st.top();
                    if( mp[v] < mp[str[i]] || v == '(')
                    {
                        break;
                    }
                    cout<<v<<" ";
                    st.pop();
                }

                st.push(str[i]);
            }

            else
                cout<<str[i]<<" ";

             //cout<<"\nAfter "<<str[i]<<" Stack condition :- \n";
            //displaystack(st);
            //cout<<endl;
            i++;
        }

        if(st.empty() == false)
        {
            while(st.empty()!= true)
            {
                cout<<st.top()<<" ";
                st.pop();
            }
        }
    }
    return 0;
}

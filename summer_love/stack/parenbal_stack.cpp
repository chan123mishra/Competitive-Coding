#include<bits/stdc++.h>
using namespace std;
int cap = 20;
bool isEmpty( int top)
{
if(top == 0)
{
    return true;
}
else
    return false;
}

bool isFull(int top)
{
if(top == cap)
{
    return true;
}
else
    return false;
}
void push(int st[], int *top, int ele)
{
    if(isFull(*top))
    {
        cout<<"Stack Overflow"<<endl;
    }
    else
    {
        st[*top] = ele;
        (*top)++;
    }
}

void pop(int st[], int *top)
{
    if(isEmpty(*top))
    {
        cout<<"Stack Underflow"<<endl;
    }
    else
    {
        free((void*)st[*top]);
        (*top)--;

    }
}

void display(int st[], int top)
{
    for(int i = top-1; i >= 0; i--)
    {
        cout<<st[i]<<" ";
    }
    cout<<endl;
}

void peek(int st[], int top)
{
cout<<st[top -1]<<endl;
}

void siZe(int top)
{
cout<<top<<endl;
}
/*
int main()
{
    int ch;
    int st[cap];
    int top = 0;
    while(1)
    {
        cout<<"For push 1. , for popping 2.,for display 3. , for top element 4.,for size 5., for exit -1."<<endl;
        cin>>ch;
        switch(ch)
        {
        case 1:
                int ele;
                cin>>ele;
                push(st,&top,ele);
                break;

        case 2:
                pop(st,&top);
                break;

        case 3:
                display(st,top);
                break;

        case 4:
                peek(st,top);
                break;
        case 5:
                siZe(top);
                break;
        default:
            break;
        }
    }
}

int main()
{
    stack<int>s1;
    string st;
    cin>>st;
    vector<char>str(st.begin(),st.end());
//    int c;

    vector<char>::iterator it;
    /*for(it = str.begin(); it!= str.end(); it++)
    {
        cout<<(*it)<<endl;
    }
    */
    //cout<<"Loop ends\n";
  /*  it = str.begin();
    while(it != str.end())
    {
       // cout<<"Am i here?"<<endl;
      // cout<<(*it)<<endl;
        if((*it) == '(' || (*it) == '[' || (*it) == '{')
            {
                s1.push((*it));
            }
        else {
            if((*it) == ')' )
            {
                if(s1.empty() == true)
                {
                    cout<<"Unbalanced"<<endl;
                    return 0;
                }
                if(s1.top() == '(')
                {
                    s1.pop();
                }
                else
                {
                    cout<<"Unbalanced"<<endl;
                    return 0;
                    //break;
                }
            }
            else if((*it) == '}')
            {
                if(s1.empty() == true)
                {
                    cout<<"Unbalanced"<<endl;
                    return 0;
                }
                if(s1.top() == '{')
                    {
                        s1.pop();
                    }
                    else
                    {
                        cout<<"Unbalanced"<<endl;
                       // break;
                        return 0;
                    }
            }
            else if((*it) == ']')
            {
                if(s1.empty() == true)
                {
                    cout<<"Unbalanced"<<endl;
                    return 0;
                }
                if(s1.top() == '[')
                {
                    s1.pop();
                }
                else
                {
                    cout<<"Unbalanced"<<endl;
                    //break;
                    return 0;
                }
            }
        }
        it++;
    }

    if(s1.empty() == false)
    {
        cout<<"Unbalanced"<<endl;
        return 0;
    }

    cout<<"Balanced"<<endl;
    return 0;
}
*/
map<char,int>priority;
bool isOperator(char c)
{
    char str[] = "+-/%*";
    for(int i = 0; i < strlen(str); i++)
    {
        if(str[i] == c)
        {
            return true;
        }
    }

    return false;

}
void operatorsPrioritize()
{
    priority['+'] = 1;
    priority['-'] = 1;
    priority['*'] = 2;
    priority['/'] = 2;
    priority['%'] = 2;
    priority['('] = 3;
    priority['}'] = 3;
}
void print(vector<char>res)
{
    vector<char>::iterator it;
     for(it = res.begin(); it != res.end(); it++)
        {
            cout<<(*it)<<" ";
        }
        cout<<endl;
}

vector<char>infixtopostfix(vector<char>&a)
{
    vector<char>::iterator it;
    vector<char>res;
    stack<char>st;
    it = a.begin();
    while(it!=a.end())
    {
    //    cout<<"Main loop"<<endl;
      //  cout<<(*it)<<endl;
        if((*it) == ')')
        {
            //cout<<"Righr para"<<endl;
            char c;
            c = st.top();
            while(c != '(')
            {
                //cout<<c<<" ";
                res.push_back(c);
                st.pop();
                c = st.top();
            }
            if(c == '(')
            {
                st.pop();
            }
        }
        else if(isOperator(*it) || (*it) == '(')
        {
            //cout<<"Operator wala loop"<<endl;
            char c;
            if(!st.empty())
                c = st.top();
            while(!st.empty() && (priority[c] >= priority[*it]) && c != '(')
            {
                res.push_back(c);
                st.pop();

            }
            st.push(*it);
        }
        else
        {
             // cout<<"Operand"<<endl;
            res.push_back(*it);

        }
        it++;
    //print(res);
    }

    while(!st.empty())
    {
        res.push_back(st.top());
        st.pop();
    }
    return res;
}

int value(int a, int b, char c)
{
    switch(c)
    {
    case '+':
        return a+b;
        break;

    case '-':
        return abs(a-b);
        break;

    case '*':
        return a*b;
        break;

    case '/':
        return a/b;
        break;

    case '%':
        return a%b;
        break;

    default:
        break;
    }
}
int evaluatepostfix(vector<char>&a)
{
    vector<char>::iterator it;
    it = a.begin();
    stack<int>st;
    while(it != a.end())
    {
        if(isOperator(*it))
        {
            int a = st.top() ;
            cout<<"a = "<<a<<endl;
            st.pop();
            int b = st.top();
             cout<<"b = "<<b<<endl;
            st.pop();
            int res = value(a,b,*it);
             cout<<"res = "<<res<<endl;
            st.push(res);
            cout<<endl;
        }
        else
        {
            st.push((int)(*it)- '0');
        }
        it++;
    }

    return st.top();
}
/*
int main()
{



    //stack<int>s1;
    string st;
    cin>>st;
    vector<char>str(st.begin(),st.end());
    vector<char>::iterator it;
//    int c;
   /* for(it = str.begin(); it!= str.end(); it++)
    {
        cout<<(*it)<<endl;
    }*/
    //vector<char>::iterator it;
/*vector<char>res;
    //operatorsPrioritize();
    //res = infixtopostfix(str);
    //print(res);
    //cout<<endl;
    int ans = evaluatepostfix(str);
    cout<<ans<<endl;
   // print(res);
    //cout<<endl;

    return 0;
}
*/
stack<int>mains;
stack<int>minstack;
void display_stack()
{
    stack<int>s;
    s = mains;
    while(!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;
}
void push_s()
{
    int ele;
                cin>>ele;
                mains.push(ele);
                if(!mains.empty())
                    cout<<"Stack size = "<<mains.size()<<endl;
                //cout<<main.top()<<" case1\n";
                if(minstack.empty())
                {
                    minstack.push(ele);
                }
                else if(ele <= minstack.top())
                {
                    //minstack.pop();
                    minstack.push(ele);
                }

}
void pop_s()
{
    if(mains.empty())
    {
        cout<<"Stack overflow\n";
        return;
    }
    int ele;
    ele = mains.top();
                mains.pop();
                if(ele == minstack.top() && !minstack.empty())
                {
                    minstack.pop();
                }

}
void getmin()
{
    cout<<minstack.top()<<endl;
}
int main()
{
    int ch;
    //static int minval = INT_MAX;
    minstack.push(INT_MAX);
    int flag = 0;
    while(true)
    {
        cout<<"For push 1. , for popping 2.,for getminimum 3.,for display 4."<<endl;
        cin>>ch;
        switch(ch)
        {
        case 1:
                push_s();
                break;

        case 2:
                pop_s();
                break;

        case 3:
                getmin();
                break;

        case 4:
                display_stack();
                break;

        case -1:
                flag = 1;
                break;
        default:
                break;

    }
    if(flag == 1)
    {
        break;
    }
}
return 0;
}

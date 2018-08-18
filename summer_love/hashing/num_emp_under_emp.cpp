#include<bits/stdc++.h>
using namespace std;

map<char,char>mgr;
map<char,int>directcountmap;
void directentrycalc()
{
    map<char, char>::iterator it;
    for(it = mgr.begin(); it != mgr.end(); it++)
    {
        if(it->first != it->second)
        {

            if(directcountmap.find(it->first) == directcountmap.end())
            {
                directcountmap.insert(make_pair(it->first,0));
            }

            if(directcountmap.find(it->second) == directcountmap.end())
            {
                directcountmap.insert(make_pair(it->second,1));
            }
            else
            {
                int sum = directcountmap.find((it->second))->second;
                directcountmap[it->second] = sum + 1;
            }
        }
    }
}
void input(int n)
{
    char emp;
    char mngr;

    for(int i = 0; i < n; i++)
    {
            cin>>emp;
            cin>>mngr;

            mgr.insert(make_pair(emp,mngr));
    }
}

bool find_list(list<char>l1,char c)
{
    list<char>::iterator it;
    for(it = l1.begin(); it != l1.end(); it++)
    {
        if(*it == c)
            return true;
    }
    return false;
}
int main()
{
    int n;
    cin>>n;
    input(n);
    directentrycalc();

    map<char,char>::iterator it1;
    map<char,int>::iterator it;
    list<char>keylist;
    cout<<"Direct entry\n";
    for(it = directcountmap.begin(); it != directcountmap.end(); it++)
    {
        cout<<it->first<<"  "<<it->second<<endl;
    }
    cout<<endl;
    for(it = directcountmap.begin(); it != directcountmap.end(); it++)
    {
        if(it->second > 0)
        {
            keylist.push_back(it->first);
        }
    }

   // list<char>::iterator it2;

    for(it1 = mgr.begin(); it1 != mgr.end(); it1++)
    {
        if((it1->first != it1->second)&&(find_list(keylist,it1->first) == true) )
        {
            cout<<"emp = "<<it1->first<<"  mngr = "<<it1->second<<endl;

                directcountmap[it1->second] = directcountmap[it1->first] + directcountmap[it1->second];

        }
    }
    for(it = directcountmap.begin(); it != directcountmap.end(); it++)
    {
        cout<<it->first<<"  "<<it->second<<endl;
    }
    return 0;
}

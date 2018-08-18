//For Directed Graph
#include<bits/stdc++.h>
using namespace std;
vector< list<int> >adj(1000);
void insert_edge(int src,int dest)
{
    adj[src].push_back(dest);
}
void delete_edge(int src,int dest)
{
    adj[src].remove(dest);
}
void list_display(list<int>l)
{
    list<int>::iterator it;
    for(it = l.begin(); it!= l.end(); it++)
    {
        cout<<(*it)<<"-> ";
    }
    cout<<"NULL";
}

void display(int n)
{
    int i;
    for(i = 0; i<n; i++)
    {
        cout<<"head = "<<i<<"-> ";
        list_display(adj[i]);
        cout<<endl;
    }
}
//using namespace std;
int main()
{
    int n;
    cin>>n;
    //cin>>e;
    int src;
    int dest;
    int ch;
    int flag = 0;
    while(true)
    {
        cout<<"\n1. For insertion of an edge , 2. For deletion of an edge 3. For display -1. For break\n";
        cin>>ch;
        switch(ch)
        {
        case 1:
                cin>>src;
                cin>>dest;
                insert_edge(src,dest);
                break;
        case 2:
                cin>>src;
                cin>>dest;
                delete_edge(src,dest);
                break;
        case 3:
                display(n);
                break;
        default:
                flag = 1;
                break;
        }
        if(flag == 1)
            break;
    }
    return 0;
}

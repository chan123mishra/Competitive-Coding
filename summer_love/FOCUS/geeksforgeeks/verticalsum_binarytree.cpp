#include<bits/stdc++.h>
using namespace std;
map<int,int>mp;
map<int,int>::iterator it;
struct node
{

    int val;
    struct node *lc;
    struct node *rc;
};

void verticalsum(struct node *head,int value)
{
    if(head == NULL)
        return;
    verticalsum(head->lc,value - 1);

    mp[head->val] = value + mp[head->val];
     verticalsum(head->rc,value +1);
}
struct node *newNode(int data)
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->val = data;
    newnode->lc = NULL;
    newnode->rc = NULL;
    return newnode;
}

struct node *insertNode(struct node *head, int data)
{
    if(head == NULL)
    {
        return newNode(data);
    }

    if(head->val < data )
    {
        head->rc  = insertNode(head->rc,data);
    }
    else if(head->val > data)
        head->lc = insertNode(head->lc,data);

    return head;
};
int main()
{
    int n;
    cin>>n;
    int a[n];
    struct node *head = NULL;
    int i = 0;
    while(n--)
    {
        int data;
        cin>>data;
        a[i] = data;
        i++;
        head  = insertNode(head,data);
    }

    verticalsum(head,0);

    for(it = mp.begin(); it != mp.end(); it++)
    {
        cout<<"At "<<it->first<<" distance the sum is "<<it->second<<endl;
    }
    cout<<endl;
    return 0;
}

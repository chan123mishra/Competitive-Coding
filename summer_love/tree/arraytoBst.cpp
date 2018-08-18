#include<bits/stdc++.h>
using namespace std;
struct node
{
    int val;
    struct node *lc;
    struct node *rc;
};
void tree_traversal(struct node *head)
{
    if(head == NULL)
        return;

    tree_traversal(head->lc);
    cout<<head->val<<" ";
    tree_traversal(head->rc);
}
struct node *arraytoBST(struct node *head, int a[], int l, int h)
{
    if(l > h)
        return NULL;

    int m = (l + h)/2;
    head = new node;
    head->val = a[m];
    head->lc = arraytoBST(head->lc,a,l,m-1);
    head->rc = arraytoBST(head->rc,a,m+1,h);
    return head;
};
int main()
{
    int a[] = {1,2,3,4,5,6,7};
    struct node *head = NULL;
    int len = sizeof(a)/sizeof(int);
    head = arraytoBST(head,a,0,len - 1);
    tree_traversal(head);
    cout<<endl;
}

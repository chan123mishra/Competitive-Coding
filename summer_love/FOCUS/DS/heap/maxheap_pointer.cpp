#include<bits/stdc++.h>
using namespace std;
struct node
{
    int val;
    struct node *lc;
    struct node *rc;
};

node *createNew(int data)
{
    node newnode = new node;
    newnode->val = data;
    newnode->lc = NULL;
    newnode->rc = NULL;
    return newnode;
}

node *maxheapify(node *root, int ele)
{

}
node *insertHeap(node *root, int ele)
{
    if(root == NULL)
    {
        return createNew(ele);
    }

    return maxheapify(root,ele);
}
int main()
{
    int n;
    cin>>n;
    int ele;
    node *root = NULL;
    for(int i = 0; i < n; i++)
    {
        cin>>ele;
        root = insertHeap(root,ele);
    }

    return 0;
}

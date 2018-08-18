#include<bits/stdc++.h>
using namespace std;
struct node
{
    int val;
    struct node *lc;
    struct node *rc;
    int height;
    int treesize;
};
node *createNew(int val)
{
    node *newnode = new node;
    newnode->val = val;
    newnode->height = 1;
    newnode->treesize = 1;
    newnode->lc = NULL;
    newnode->rc = NULL;
    return newnode;
}

int treeHeight(struct node *root)
{
    if(root == NULL)
        return 0;

    return 1+max(treeHeight(root->lc ),treeHeight(root->rc));
}
int order(struct node *root)
{
    return (treeHeight(root->lc) - treeHeight(root->rc));
}
int sizetree(struct node *root)
{
    if(root == NULL)
        return 0;

    return 1+sizetree(root->lc)+sizetree(root->rc);
}
struct node *singlerightrotation(struct node *root)
{
    node *newnode;
    newnode = root->lc;
    root->lc = newnode->rc;
    newnode->rc = root;
    root->height = max(treeHeight(root->lc), treeHeight(root->rc)) + 1;
    newnode->height = max(treeHeight(newnode->lc),treeHeight(newnode->rc)) + 1;
    return newnode;
}

struct node *singleleftrotation(struct node *root)
{
    node *newnode;
    newnode = root->rc;
    root->rc = newnode->lc;
    newnode->lc = root;
    root->height =  max(treeHeight(root->lc),treeHeight(root->rc)) + 1;
    newnode->height = max(treeHeight(newnode->lc),treeHeight(newnode->rc)) + 1;
    return newnode;
};
void constructAvl(int ele, struct node *&root, int &invcount)
{
    if(root == NULL)
    {
        root = createNew(ele);
        return;
    }
    else
    {
        if(ele < root->val)
        {
            constructAvl(ele,root->lc,invcount);
            invcount= 1+ invcount + sizetree(root->rc);
            if(order(root) > 1 && ele < root->lc->val)
            {
                root = singlerightrotation(root);
            }
            else if(order(root) > 1 && ele > root->lc->val)
            {
                root->lc = singleleftrotation(root->lc);
                root = singlerightrotation(root);
            }
        }
        else
        {
        	constructAvl(ele,root->rc,invcount);
			 if(order(root) < -1 && ele > root->rc->val)
            {
                root = singleleftrotation(root);
            }
            else if(order(root) <- 1 && ele < root->lc->val)
            {
                root->rc = singlerightrotation(root->rc);
                root = singleleftrotation(root);
            }
        }
    }
    
    root->height = 1 + max(treeHeight(root->lc),treeHeight(root->rc));
}
int inversionCount(int a[], int n)
{
    struct node *root = NULL;
    int invcount = 0;
    for(int i = 0; i < n; i++)
    {
        constructAvl(a[i],root,invcount);
    }

    return invcount;
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i = 0; i < n; i++)
    {
        cin>>a[i];
    }

    int res = inversionCount(a,n);
    cout<<res<<endl;
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
struct node
{
    int val;
    struct node *left;
    struct node *right;
    int height;
};

struct node *createNode(int data)
{
    node *newnode = new node;
    newnode->val = data;
    newnode->left = NULL;
    newnode->right = NULL;
    newnode->height = 0;
};

int getHeight(struct node *a)
{
    if(!a)
        return -1;

    else
        return a->height;
}

int order(struct node *a)
{
    return getHeight(a->left) - getHeight(a->right);
}

struct node *singleleftrotation(struct node *root)
{
    node *newnode;
    newnode = root->left;
    root->left = newnode->right;
    newnode->right = root;
    root->height = max(getHeight(root->left), getHeight(root->right)) + 1;
    newnode->height = max(getHeight(newnode->left), getHeight(newnode->right)) + 1;
    return newnode;
}

struct node *singlerightrotation(struct node *root)
{
    node *newnode;
    newnode = root->right;
    root->right = newnode->left;
    newnode->left = root;
    root->height =  max(getHeight(root->left),getHeight(root->right)) + 1;
    newnode->height = max(getHeight(newnode->left),getHeight(newnode->right)) + 1;
    return newnode;
};
struct node *insert_node(struct node *root, int val)
{
    if(!root)
    {
        root = createNode(val);
    }
    else if(val < root->val)
    {
        root->left = insert_node(root->left,val);
        if(order(root) > 1 && val < root->left->val)
            root = singleleftrotation(root);
        else if(order(root) > 1 && val > root->left->val)
        {
            root->left = singlerightrotation(root->left);
            root = singleleftrotation(root);
        }
    }
    else if(val > root->val)
    {
        root->right = insert_node(root->right,val);
        if(order(root) < -1 && val > root->right->val)
            root = singlerightrotation(root);
        else if(order(root) < -1 && val < root->right->val)
        {
            root->right = singleleftrotation(root->right);
            root = singlerightrotation(root);
        }
    }
    root->height = max(getHeight(root->left),getHeight(root->right)) + 1;
    return root;
};

void inorder(struct node *root)
{
    if(root == NULL)
    {
        return;
    }
    inorder(root->left);
    cout<<root->val<<" ";
    inorder(root->right);
}


int main()
{
    int n;
    int ele;
    cin>>n;
    node *root = NULL;
    for(int i = 0; i < n; i++)
    {
        cin>>ele;
       root = insert_node(root,ele);
    }

    inorder(root);
    cout<<endl;

    return 0;
}

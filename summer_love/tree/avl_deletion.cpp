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

struct node *inorderPredecessor(struct node *root)
{

    if(root->right == NULL)
    {
        return root;
    }

    root = inorderPredecessor(root->right);
    return root;
};

struct node *delNode(struct node *root, int val)
{
    if(root == NULL)
        return root;

    node *temp;
    if(root->val > val)
    {
        root->left = delNode(root->left,val);
        if((order(root) > 1) && (order(root->left) >= 0) )
        {
            root = singleleftrotation(root);
        }
        else if((order(root) > 1) && (order(root->left) < 0))
        {
             root->left = singlerightrotation(root->left);
            root = singleleftrotation(root);
        }
    }
    else if(root->val < val)
    {
        root->right = delNode(root->right,val);
        if((order(root) < -1) && (order(root->right) <= 0) )
        {
            root = singlerightrotation(root);
        }
        else if((order(root) < -1) && (order(root->right) > 0))
        {
             root->right = singleleftrotation(root->right);
            root = singlerightrotation(root);
        }
    }
    else
    {

        if(root->right == NULL && root->left == NULL)
        {
            root = NULL;
        }
        else if(root->right == NULL && root->left != NULL)
        {
            root = root->left;
        }
        else if(root->right && !root->left)
        {
            root = root->right;
        }
        else if(root->left && root->right)
        {
            temp = inorderPredecessor(root->left);
            root->val = temp->val;
            root->left = delNode(root->left,root->val);
        }
    }

    root->height = max(getHeight(root->left),getHeight(root->right)) + 1;
    return root;
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
    delNode(root,10);
    inorder(root);
    return 0;
}

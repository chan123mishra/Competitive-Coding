#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node *lc, *rc;
};
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
};
// A utility function to create a new Binary Tree node
struct node *newNode(int item)
{
    struct node *temp =  (struct node *)malloc(sizeof(struct node));
    temp->data = item;
    temp->lc = temp->rc = NULL;
    return temp;
}
int maxlevel = INT_MIN;
//For right view check for right subtree first
/* A binary tree node has data, pointer to left child
   and a pointer to right child
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
}; */

// Should print right view of tree

void rightviewUtil(struct Node *root, int level)
{
    if(root)
    {
        if(level > maxlevel)
        {
            cout<<root->data<<" ";
            maxlevel = level;
        }
        rightviewUtil(root->right, level+1);
        rightviewUtil(root->left, level+1);
    }
}
void rightView(struct Node *root)
{
   // Your Code here
  rightviewUtil(root,0);

}
void leftView(node *root, int level)
{
    if(root)
    {
        if(level > maxlevel)
        {
            cout<<root->data<<" ";
            maxlevel = level;
        }
        leftView(root->lc,level+1);
        leftView(root->rc,level+1);
    }
}
int main()
{
    struct node *root = newNode(12);
    root->lc = newNode(10);
    root->rc = newNode(30);
    root->rc->lc = newNode(25);
    root->rc->rc = newNode(40);

  //  leftView(root,0);
  rightView(root);

    return 0;
}

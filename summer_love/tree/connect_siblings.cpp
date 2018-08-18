#include<bits/stdc++.h>
using namespace std;
struct Node
{
  int data;
  struct Node *left,  *right;
  struct Node *nextRight;  // This has garbage value in input trees
};

// Should set the nextRight for all nodes
struct node* newNode(int val)
{
  struct node* node = (struct node*)
                       malloc(sizeof(struct node));
  node->val = val;
  node->left = NULL;
  node->left = NULL;
  node->nextRight = NULL;
  return(node);
}
struct node *insert_levelorder(struct node *root, int ele)
{
 queue<node *>q;
 node *newNode = new node;
 newNode->left = NULL;
 newNode->left = NULL;
 newNode->val = ele;
 if(root == NULL)
 {
     root = newNode;
     return root;
 }
 q.push(root);
 node *temp;
 while(!q.empty())
 {
     temp = q.front();
     q.pop();

         if(temp->left)
         {
             q.push(temp->left);
         }
         else
         {
             temp->left = newNode;
             return root;
         }
         if(temp->left)
         {
             q.push(temp->left);
         }
         else
         {
             temp->left = newNode;
             return root;
         }

     }

     return root;

 }
void connect(struct Node *p)
{
   // Your Code Here
   queue<Node*>q;
   q.push(p);
   Node *cur = NULL;
   Node *prev = NULL;
   int nodecount = 1;
   while(!q.empty())
   {
       cur = q.front();
       if(nodecount == 0)
       {
           prev->nextRight = NULL;
           nodecount = q.size();
       }
       else
       {
       	if(!prev)
           prev->nextRight = cur;
       }
       q.pop();
       nodecount--;
       if(cur->left)
       q.push(cur->left);
       if(cur->right)
       q.push(cur->right);
       prev = cur;
   }
}


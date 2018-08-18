#include<bits/stdc++.h>
struct node
{
int val;
struct node *lc;
struct node *rc;
};

using namespace std;

struct node* newNode(int val)
{
  struct node* node = (struct node*)
                       malloc(sizeof(struct node));
  node->val = val;
  node->lc = NULL;
  node->rc = NULL;

  return(node);
}
void inorder(node *root)
{ if(root == NULL)
{
return;
}
inorder(root->lc);
cout<<root->val<<" ";
inorder(root->rc);
}

struct node *insert_levelorder(struct node *root, int ele)
{
 queue<node *>q;
 node *newNode = new node;
 newNode->lc = NULL;
 newNode->rc = NULL;
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

         if(temp->lc)
         {
             q.push(temp->lc);
         }
         else
         {
             temp->lc = newNode;
             return root;
         }
         if(temp->rc)
         {
             q.push(temp->rc);
         }
         else
         {
             temp->rc = newNode;
             return root;
         }

     }

     return root;

 }
 
 struct node *convertChildtree(struct node *root)
 {
 	if(root->lc == NULL && root->rc == NULL)
   	{
 		return root;
	}
	
	root->lc = convertChildtree(root->lc);
	root->rc = convertChildtree(root->rc);
	
	int left = 0;
	int right = 0;
	if(root->lc)
	{
		left = root->lc->val;
	}
	if(root->rc)
	{
		right = root->rc->val;
	}
	
	if(left + right > root->val)
	{
		root->val = left + right;
	}
	else if(left + right < root->val)
	{
		if(root->lc)
		{
			root->lc->val = root->lc->val + root->val - (left + right);
			root->lc = convertChildtree(root->lc);
		}
		else if(root->rc)
		{
			root->rc->val = root->rc->val + root->val - (left + right);
			root->lc = convertChildtree(root->rc);
		}		
	}
	
	return root;
	 				
 }
 
 void preorder(struct node *root)
 {
 	if(root == NULL)
 		return;
 		
 	cout<<root->val<<" ";
 	preorder(root->lc);
 	preorder(root->rc);
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
         root = insert_levelorder(root,ele);
     }
     cout<<"Normal tree\n";
     preorder(root);
     root = convertChildtree(root);
     cout<<"\nChild tree\n";
     preorder(root);
     
     return 0;
 }

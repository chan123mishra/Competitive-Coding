#include<bits/stdc++.h>
struct node
{
int val;
struct node *lc;
struct node *rc;
};

using namespace std;

struct node* newNode(int data)
{
  struct node* node = (struct node*)
                       malloc(sizeof(struct node));
  node->val = data;
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
 int lca_fnc(struct node *root, int a, int b)
 {
 	if(root == NULL)
 		return 0;
 	
 	if(root->val == a || root->val == b)
 	{
 		return a;
	}
	int l = lca_fnc(root->lc,a,b);
	int r = lca_fnc(root->rc,a,b);
	
	if(l && r)
	{
		return root->val;
	}
	if(l)
		return l;
	else
		return r;
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
    
     int a,b;
     cin>>a>>b;
     int lca = lca_fnc(root,a,b);
     cout<<lca<<endl;
     
    
}
